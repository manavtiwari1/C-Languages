#include <iostream>
using namespace std;

class BankAccount {
    private:
        string AccountHolderName;
        int AccountNumber;
        float Balance;
        
    public:
        void openAccount(string name, int accountNumber, float balance) {
            AccountHolderName = name;
            AccountNumber = accountNumber; 
            Balance = balance;
        }
        void display() {
            cout << "Name = " << AccountHolderName << endl;
            cout << "Account Number = " << AccountNumber << endl;
            cout << "Balance = " << Balance << endl;
        }
        void Deposit(float amount) {
            Balance += amount;
            cout << "Amount Deposited: " << amount << endl;
        }
        void withdraw(float amount) {
            if(amount <= Balance) {
                Balance -= amount;
                cout << "Amount Withdrawn: " << amount << endl;
            } else {
                cout << "Cannot Withdraw - insufficient balance" << endl;
            }
        }
};

int main() {
    BankAccount A1;
    
    A1.openAccount("Manav", 12345, 10000);
    A1.Deposit(0);
    A1.withdraw(5000);
    A1.display();
    
    return 0;
}
