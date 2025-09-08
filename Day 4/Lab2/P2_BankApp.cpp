// 2:Create cpp application for bank account handling.
// 2.1. Create a class BankAccount -- acct no(int),customer name(string),balance(double)
// Add  constr. (2 constrs : first to accept all details )

// 2.2 Add Business logic methods
// Methods
// public void withdraw(double amt) 
// public void deposit(double amt)
// public void displaybalance()
//add menu to test above methods

// 2.3: Create object of account class and test withdraw and deposit methods.
#include<iostream>
using namespace std;

class BankAccount{
private:    
    int accNo;
    string name;
    double balance;
public:
    BankAccount(){
        accNo=1001;
        name="dont know";
        balance=1000;
    }


    BankAccount(int accNo, string name, double balance){
        this->accNo=accNo;
        this->name=name;
        this->balance=balance;
    }


    void withdraw(double amt){
        if(amt>balance)
        cout<<"\t-------insuffient balance-------";
        else{
            balance-=amt;
            cout<<"\t-------amount is withdrawn-------"<<endl;
        }
    }


    void deposit(double amt){
        balance+=amt;
         cout<<"\t------amount is deposited-------"<<endl;
    }

    void displaybalance(){
        cout<<"\t-------balance is :"<<balance<<endl;
    }
};

int main(){
    int accNo;
    string name;
    double balance;
    int choice;
    double amt;

    cout<<"\t-------Enter account number, name and balance:-------"<<endl;
    cin>>accNo>>name>>balance;

    BankAccount b1(accNo,name,balance);

    do{
        cout<<"1.withdraw\n2.deposit\n3.displaybalance\n4.exit"<<endl;
        cout<<"\t-------enter your choice:-------"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"\t-------enter amount to withdraw-------"<<endl;
                cin>>amt;
                b1.withdraw(amt);
                break;

            case 2:
                cout<<"\t-------enter amount to deposit-------"<<endl;
                cin>>amt;
                b1.deposit(amt);
                break;

            case 3:
                b1.displaybalance();
                break;

            case 4:
                cout<<"\t-------exit-------"<<endl;
                break;

            default:
                cout<<"\t-------invalid choice-------"<<endl;
        }
    }while(choice!=4);

    return 0;
}