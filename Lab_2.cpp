#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    void setAccountNumber(string accountNumber)
    {
        this->accountNumber = accountNumber;
    }

    void setAccountHolder(string accountHolder)
    {
        this->accountHolder = accountHolder;
    }

    void setBalance(double balance)
    {
        if (balance >= 0)
        {
            this->balance = balance;
        }
        else
        {
            cout << "Invalid balance! Balance cannot be negative." << endl;
            this->balance = 0;
        }
    }

    string getAccountNumber()
    {
        return accountNumber;
    }

    string getAccountHolder()
    {
        return accountHolder;
    }

    double getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount acc;
    acc.setAccountNumber("AC100234");
    acc.setAccountHolder("Karim Hossain");
    acc.setBalance(15000.50);

    cout << "Account Number: " << acc.getAccountNumber() << endl;
    cout << "Account Holder: " << acc.getAccountHolder() << endl;
    cout << "Balance: " << acc.getBalance() << endl;

    return 0;
}