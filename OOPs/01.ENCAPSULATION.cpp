#include <iostream>
using namespace std;

class BankAccount {
private:  // 🔒 Data Hiding - Core of Encapsulation
    string accountHolder;
    long accountNumber;
    double balance;
    int PIN;

public:
    // Constructor
    BankAccount(string name, long accNum, int pin) {
        accountHolder = name;
        accountNumber = accNum;
        balance = 0;
        PIN = pin;
        cout << "Account created for: " << name << endl;
    }
    
    // Getter (Read access)
    double getBalance(int pin) {
        if (pin == PIN) {
            return balance;
        } else {
            cout << "Wrong PIN!" << endl;
            return -1;
        }
    }
    
    // Setter with validation (Controlled write access)
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid amount!" << endl;
        }
    }
    
    void withdraw(double amount, int pin) {
        if (pin != PIN) {
            cout << "Wrong PIN!" << endl;
            return;
        }
        
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else if (amount <= 0) {
            cout << "Invalid amount!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        }
    }
    
    void displayInfo() {
        cout << "\n--- Account Info ---" << endl;
        cout << "Holder: " << accountHolder << endl;
        cout << "Account No: " << accountNumber << endl;
        // Balance not shown without PIN!
    }
};

int main() {
    BankAccount myAccount("John Doe", 123456789, 1234);
    
    myAccount.deposit(5000);
    myAccount.deposit(-500);  // Validation works!
    
    cout << "Balance: $" << myAccount.getBalance(1234) << endl;
    cout << "Balance: $" << myAccount.getBalance(9999) << endl;  // Wrong PIN
    
    myAccount.withdraw(2000, 1234);
    myAccount.withdraw(1000, 9999);  // Wrong PIN
    
    // myAccount.balance = 1000000;  // ❌ ERROR! Can't access private
    
    myAccount.displayInfo();
    
    return 0;
}