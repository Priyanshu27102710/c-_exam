#include <iostream>
using namespace std;

class BankAccount
{
private:

    int accountNumber;
    double balance;
    string ownerName;

public:
    
    void setAccountDetails()
    {
        cout << "Enter Account Number = ";
        cin >> accountNumber;

        cin.ignore();

        cout << "Enter Owner Name = ";
        getline(cin, ownerName);

        cout << "Enter Initial Balance = ";
        cin >> balance;
    }

    void credit(double amount)
    {
        balance += amount;
        cout << "\nRs. " << amount << " credited successfully\n";
    }

    void debit(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Rs. " << amount << " debited successfully\n";
        }
        else
        {
            cout << "insufficient Balance\n";
        }
    }

   
    void display()
    {
        cout << "\n Account Details " << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Owner Name     : " << ownerName << endl;
        cout << "Balance        : Rs. " << balance << endl;
    }
};

int main()
{
    BankAccount account;

    account.setAccountDetails();

    double amount;

    cout << "\nEnter amount to Credit = ";
    cin >> amount;
    account.credit(amount);

    cout << "Enter amount to Debit = ";
    cin >> amount;
    account.debit(amount);

    account.display();

    cout << " \nall account details are display successfully.." <<endl;

    return 0;
}