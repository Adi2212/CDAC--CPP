// 6: Create CRUD Shop Application Using  File
//    Write class Product with data member prdid,name,qty,price;
//     Menus:
//     1:Add Prd
//     2:Display Prds
//     3:Search Prd
//     4:Update/Modify prd
//     5:delete prd
//     6:Exit
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

class Product {
    int prdId;
    string name;
    int qty;
    float price;

public:
    // ---- Input product details ----
    void createPrd() {
        cout << "Enter Product ID: ";
        cin >> prdId;
        cout << "Enter Product Name: ";
        cin >> name;
        cout << "Enter Quantity: ";
        cin >> qty;
        cout << "Enter Price: ";
        cin >> price;
    }

    // ---- Display product details ----
    void showPrd() const {
        cout << left << setw(10) << prdId
             << left << setw(20) << name
             << left << setw(10) << qty
             << left << setw(10) << price << endl;
    }

    int getPrdId() const { return prdId; }

    void modifyPrd() {
        cout << "Modify Product ID: ";
        cin >> prdId;
        cout << "Modify Product Name: ";
        cin >> name;
        cout << "Modify Quantity: ";
        cin >> qty;
        cout << "Modify Price: ";
        cin >> price;
    }

    // ---- Serialization (write to file) ----
    void save(ofstream &outFile) const {
        outFile.write((char *)&prdId, sizeof(prdId));

        size_t len = name.size();
        outFile.write((char *)&len, sizeof(len));
        outFile.write(name.c_str(), len);

        outFile.write((char *)&qty, sizeof(qty));
        outFile.write((char *)&price, sizeof(price));
    }

    // ---- Deserialization (read from file) ----
    bool load(ifstream &inFile) {
        if (!inFile.read((char *)&prdId, sizeof(prdId)))
            return false;

        size_t len;
        inFile.read((char *)&len, sizeof(len));
        name.resize(len);
        inFile.read(&name[0], len);

        inFile.read((char *)&qty, sizeof(qty));
        inFile.read((char *)&price, sizeof(price));
        return true;
    }
};

// ---- Menu ----
void menu() {
    cout << "\nShop Application Menu\n";
    cout << "1. Add Product\n";
    cout << "2. Display Products\n";
    cout << "3. Search Product\n";
    cout << "4. Update/Modify Product\n";
    cout << "5. Delete Product\n";
    cout << "6. Exit\n";
    cout << "Enter your choice: ";
}

// ---- Add product ----
void addProduct() {
    Product prd;
    prd.createPrd();
    ofstream outFile("products.dat", ios::binary | ios::app);
    prd.save(outFile);
    outFile.close();
}

// ---- Display all products ----
void displayProducts() {
    ifstream inFile("products.dat", ios::binary);
    if (!inFile) {
        cout << "No products found.\n";
        return;
    }


    cout << left << setw(10) << "ID"
         << left << setw(20) << "Name"
         << left << setw(10) << "Qty"
         << left << setw(10) << "Price" << endl;

    Product prd;
    while (prd.load(inFile)) {
        prd.showPrd();
    }
    inFile.close();
}

// ---- Search product ----
void searchProduct(int id) {
    ifstream inFile("products.dat", ios::binary);
    if (!inFile) {
        cout << "File could not be opened.\n";
        return;
    }

    Product prd;
    bool found = false;
    while (prd.load(inFile)) {
        if (prd.getPrdId() == id) {
            cout << "Product found:\n";
            cout << left << setw(10) << "ID"
                 << left << setw(20) << "Name"
                 << left << setw(10) << "Qty"
                 << left << setw(10) << "Price" << endl;
            prd.showPrd();
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Product ID not found.\n";

    inFile.close();
}

// ---- Update product ----
void updateProduct(int id) {
    ifstream inFile("products.dat", ios::binary);
    if (!inFile) {
        cout << "File could not be opened.\n";
        return;
    }

    ofstream outFile("temp.dat", ios::binary);
    Product prd;
    bool found = false;

    while (prd.load(inFile)) {
        if (prd.getPrdId() == id) {
            cout << "Current details:\n";
            cout << left << setw(10) << "ID"
                 << left << setw(20) << "Name"
                 << left << setw(10) << "Qty"
                 << left << setw(10) << "Price" << endl;
            prd.showPrd();

            cout << "Enter new details:\n";
            prd.modifyPrd();
            found = true;
        }
        prd.save(outFile);
    }

    inFile.close();
    outFile.close();

    remove("products.dat");
    rename("temp.dat", "products.dat");

    if (found)
        cout << "Record updated.\n";
    else
        cout << "Product ID not found.\n";
}

// ---- Delete product ----
void deleteProduct(int id) {
    ifstream inFile("products.dat", ios::binary);
    if (!inFile) {
        cout << "File could not be opened.\n";
        return;
    }

    ofstream outFile("temp.dat", ios::binary);
    Product prd;
    bool found = false;

    while (prd.load(inFile)) {
        if (prd.getPrdId() != id) {
            prd.save(outFile);
        } else {
            found = true;
        }
    }

    inFile.close();
    outFile.close();

    remove("products.dat");
    rename("temp.dat", "products.dat");

    if (found)
        cout << "Record deleted.\n";
    else
        cout << "Product ID not found.\n";
}

// ---- Main ----
int main() {
    int choice, id;
    do {
        menu();
        cin >> choice;
        switch (choice) {
            case 1:
                addProduct();
                break;
            case 2:
                displayProducts();
                break;
            case 3:
                cout << "Enter Product ID to search: ";
                cin >> id;
                searchProduct(id);
                break;
            case 4:
                cout << "Enter Product ID to update: ";
                cin >> id;
                updateProduct(id);
                break;
            case 5:
                cout << "Enter Product ID to delete: ";
                cin >> id;
                deleteProduct(id);
                break;
            case 6:
                cout << "Exiting application.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
