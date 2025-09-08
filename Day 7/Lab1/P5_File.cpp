// 5: Create an File IO application for basic operation 
//    1:Write file:accept data from user and store in file
//    2:Read file:display line by line
//    3:copy data from one file into another file
#include <iostream>
#include <fstream>
using namespace std;

void showMenu() {
    cout << "Menu:\n";
    cout << "1: Write to file\n";
    cout << "2: Read from file\n";
    cout << "3: Copy file contents\n";
    cout << "4: Exit\n";
    cout << "Choose an option: ";
}

void writeFile() {
    string filename, data;
    cout << "Enter filename to write to: ";
    cin >> filename;
    cin.ignore(); // To ignore the newline character after filename input
    cout << "Enter data to write (end with a single '.' on a new line):\n";
    
    ofstream outFile(filename);
    if (!outFile) {
        cerr << "Error opening file for writing.\n";
        return;
    }

    while (true) {
        getline(cin, data);
        if (data == ".") break;
        outFile << data << "\n";
    }
    outFile.close();
    cout << "Data written to " << filename << " successfully.\n";
}

void readFile() {
    string filename, line;
    cout << "Enter filename to read from: ";
    cin >> filename;

    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error opening file for reading.\n";
        return;
    }

    cout << "Contents of " << filename << ":\n";
    while (getline(inFile, line)) {
        cout << line << "\n";
    }
    inFile.close();
}

void copyFile() {
    string sourceFile, destFile, line;
    cout << "Enter source filename: ";
    cin >> sourceFile;
    cout << "Enter destination filename: ";
    cin >> destFile;

    ifstream inFile(sourceFile);
    if (!inFile) {
        cerr << "Error opening source file for reading.\n";
        return;
    }

    ofstream outFile(destFile);
    if (!outFile) {
        cerr << "Error opening destination file for writing.\n";
        inFile.close();
        return;
    }

    while (getline(inFile, line)) {
        outFile << line << "\n";
    }

    inFile.close();
    outFile.close();
    cout << "Contents copied from " << sourceFile << " to " << destFile << " successfully.\n";
}

int main() {
    int choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                writeFile();
                break;
            case 2:
                readFile();
                break;
            case 3:
                copyFile();
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}