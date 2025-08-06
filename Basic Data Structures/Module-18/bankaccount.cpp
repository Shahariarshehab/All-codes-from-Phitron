#include <bits/stdc++.h>
using namespace std;
class BankAccount
{
private:
    int accountNumber;
    float balance;

public:
    BankAccount(int accountNumber)
    {
        this->accountNumber = accountNumber;
        balance = 1000.00;
    }
    string MaskedAccountNumber()
    {
        int tmp = accountNumber;
        stringstream ss;
        ss << accountNumber;
        string str = ss.str();
        for (int i = 0; i < str.length() - 3; i++)
        {
            str[i] = '*';
        }
        return str;
    }
    void deposit_money(float amnt)
    {
        balance += amnt;
        cout << fixed << setprecision(2);
        cout << "Your bank a.c " << MaskedAccountNumber() << " credited with BDT " << amnt << endl;
    }
    void withdraw_money(float amnt)
    {
        if (balance >= amnt)
        {
            balance -= amnt;
            cout << fixed << setprecision(2);
            cout << "Your bank a.c " << MaskedAccountNumber() << " debited with BDT " << amnt << endl;
        }
        else
        {
            cout << "You have Insufficient Balance." << endl;
        }
    }
    void check_balance()
    {
        cout << fixed << setprecision(2);
        cout << MaskedAccountNumber() << " has BDT " << balance << endl;
    }
};
int main()
{
    BankAccount Shaharia(803425);

    Shaharia.deposit_money(5000);
    Shaharia.withdraw_money(3000);
    Shaharia.withdraw_money(5000);
    Shaharia.withdraw_money(3000);
    Shaharia.check_balance();

    return 0;
}