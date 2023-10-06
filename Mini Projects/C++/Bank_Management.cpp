#include <iostream>
#include <fstream>
#define MIN_BALANCE 500
using namespace std;

class Account
{
    string firstName, lastName;
    int accountNumber;
    int balance;

public:
    void setFname(string fname);
    void setLname(string lname);
    void setAccNo(int accNo);
    void setBalance(int sbalance);

    Account(string fname = " ", string lname = " ", int accNo = 0)
    {
        setFname(fname);
        setLname(lname);
        setAccNo(accNo);
    }

    string getFname();
    string getLname();

    int getAccNo();
    int getBalance();

    void getWithdrawal(int wtd);
    int getDeposit(int dpo);
    
};

void Account::setFname(string fname)
{
    firstName = fname;
}

void Account::setLname(string lname)
{
    lastName = lname;
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
    return firstName;
}

string Account::getLname()
{
    return lastName;
}

int Account::getAccNo()
{
    return accountNumber;
}

int Account::getBalance()
{
    return balance;
}

void Account::getWithdrawal(int wtd)
{
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
        cout << "\nError: 101\nWithdrawal cannot exceed " << MIN_BALANCE;
    }
    fi.close();
}

int Account::getDeposit(int dpo)
{
    fstream fi;
    fi.open("account.txt", ios::in | ios::app);
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
    string fname, lname;
    int accNo, balance, choice, deposit, withdraw;

    cout << "***Banking System***";
    cout << "\nEnter First Name: ";
    cin >> fname;
    a.setFname(fname);

    fi << "First Name: " << fname << endl;
    cout << "\nEnter Last Name: ";
    cin >> lname;
    a.setLname(lname);

    fi << "Last Name: " << lname << endl;
    cout << "Enter A/c No : ";
    cin >> accNo;
    a.setAccNo(accNo);

    fi << "A/c No: " << accNo << endl;
    cout << "\nEnter Balance: ";
    cin >> balance;
    a.setBalance(balance);

    while (choice != 4)
    {
        cout << "\n1)Deposit";
        cout << "\n2)Withdraw";
        cout << "\n3)Display Current Balance";
        cout << "\n4)Exit";
        cout << "\nSelect any given option to proceed: ";
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
