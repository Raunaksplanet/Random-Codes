#include <iostream>
#include <fstream>
#define MIN_BALANCE 500
using namespace std;

class Account
{
    string FullName;
    int accountNumber;
    int balance = 0;

public:
    void setFname(string fname);
    void setAccNo(int accNo);
    void setBalance(int sbalance);

    string getFname();

    int getAccNo();
    int getBalance();

    void getWithdrawal(int wtd);
    int getDeposit(int dpo);
};

void Account::setFname(string fname)
{
    FullName = fname;
}

void Account::setAccNo(int accNo)
{
    accountNumber = accNo;
}

void Account::setBalance(int sbalance)
{
    try
    {
        if (sbalance < MIN_BALANCE)
        {
            throw 100;
        }
        balance = sbalance;
    }
    catch (int e)
    {
        cout << "\nError: " << e;
        cout << "\nMinimum Balance: " << MIN_BALANCE;
    }
}

string Account::getFname()
{
    return FullName;
}

int Account::getAccNo()
{
    return accountNumber;
}

int Account::getBalance()
{
    system("cls");
    return balance;
}

void Account::getWithdrawal(int wtd)
{
    system("cls");
    fstream fi;
    fi.open("account.txt", ios::in | ios::app);
    try
    {
        if (balance - wtd < MIN_BALANCE)
        {
            throw 101;
        }
        balance -= wtd;
        fi << "\nWithdrawal: " << wtd;
    }
    catch (int e)
    {
        cout << "\n\t\t\tError: 101\n\t\tWithdrawal cannot exceed " << MIN_BALANCE;
    }
    fi.close();
}

int Account::getDeposit(int dpo)
{
    system("cls");
    fstream fi;
    fi.open("account.txt");
    balance += dpo;
    fi << "\nDeposit: " << dpo;
    fi.close();
    return balance;
}

int main()
{
    fstream fi;
    fi.open("account.txt", ios::in | ios::out | ios::trunc);

    Account a;
    string fname;
    int accNo, balance, choice, deposit, withdraw;

    cout << "\n\t\t Banking System\n";
    

    while (choice != 4)
    {
        cout << "\n1)Deposit";
        cout << "\n2)Withdraw";
        cout << "\n3)Display Current Balance";
        cout << "\n4)Exit";
        cout << "\nYour Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nEnter Deposit Amount: ";
            cin >> deposit;
            a.getDeposit(deposit);
            break;

        case 2:
            cout << "\nEnter Withdrawal Amount: ";
            cin >> withdraw;
            a.getWithdrawal(withdraw);
            break;

        case 3:
            cout << "\nYour Current Balance: " << a.getBalance();
            break;

        case 4:
            break;

        default:
            cout << "\nEnter Valid Option";
            break;
        }
    }
    fi.close();
}