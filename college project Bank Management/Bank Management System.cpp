#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define MIN_BALANCE 500

/*-------------------------------- Bank Management start --------------------------------*/
class Account
{
public:
    string FullName;
    int accountNumber;
    int balance = 0;

    void getBalance(string usrnm);
    void getWithdrawal(int wtd, string usrnm);
    void getDeposit(int dpo, string usrnm);
    void AccountInfo(string usrnm, string pswd, string accno);
    void SetEndCredit(string usrnm);
    void SetDefaultBalance(string usrnm);
};

void Account::getDeposit(int dpo, string usrnm)
{
    system("cls");
    fstream fi;
    fi.open(usrnm + ".txt", ios::app);
    balance += dpo;
    fi << "\nDeposit: " << dpo;
    fi.close();

    cout << "\n\t\t Balance Deposit: " << dpo;
    cout << "\n\t\t Current Balance: " << balance;
}

void Account::getWithdrawal(int wtd, string usrnm)
{
    system("cls");
    fstream fi;
    fi.open(usrnm + ".txt", ios::app);
    try
    {
        if (balance - wtd < MIN_BALANCE)
        {
            throw 101;
        }
        balance -= wtd;
        fi << "\nWithdrawal: " << wtd;
        cout << "\n\t\t Balance withdrawal: " << wtd;
        cout << "\n\t\t Current Balance: " << balance;
    }
    catch (int e)
    {
        cout << "\n\t\t\tError: 101\n\t\tInsufficient Balance " << MIN_BALANCE;
    }
    fi.close();
}

void Account::SetDefaultBalance(string usrnm)
{
    ifstream file(usrnm + ".txt");
    string line, amount;

    if (file.is_open())
    {
        while (getline(file, line))
        {
            amount = line;
        }
        file.close();
    }

    if (amount.length() == 8)
    {
        balance = stoi(amount);
        balance = 0;
    }
    else
    {
        balance = stoi(amount);
    }
}

void Account::getBalance(string usrnm)
{
    system("cls");
    cout << "\n\t\t Your Current Balance: " << balance;

    fstream fi;
    fi.open(usrnm + ".txt", ios::app);
    fi << "\nCurrent Balance:" << balance;
    fi.close();
}

void Account ::AccountInfo(string usrnm, string pswd, string accno)
{
    ifstream read(usrnm + ".txt");
    getline(read, usrnm);
    getline(read, pswd);
    getline(read, accno);

    cout << "\n\t   ----- User's Account Details -----\n";
    cout << "Username: " << usrnm << endl;

    cout << "Password: " << pswd << endl;

    cout << "A/c No: " << accno << endl;

    cout << "Current Balance: " << balance << endl;
}

void Account::SetEndCredit(string usrnm)
{
    fstream fi;
    fi.open(usrnm + ".txt", ios::app);
    fi << endl
       << balance;
    fi.close();
}

/*-------------------------------- Bank Management end --------------------------------*/

int main()
{

    string name, password, accno;
start:
    cout << "\n\t\t ----- Login Panel -----\n";
    cout << "1. Register Account\n2. Login Account\n3. Exit Program\nYour Choice: ";
    int choice;
    cin >> choice;

    if (choice == 1)
    {
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Password: ";
    ello:
        cin >> password;
        if (password.length() <= 7)
        {
            cout << "\nPassword should minimum 8 characters.\nEnter password again: ";
            cin.ignore();
            goto ello;
        }

        cout << "Enter A/c No : ";
    cello:
        cin >> accno;
    while(true)
    {
        if(accno.length() != 8)
        {
            cout << "\nAccount Number should exact 8 Digits.\nEnter Account Number again: ";
            cin.ignore();
            goto cello;
        }
        else{
            break;
        }
    }
        // if (accno.length() != 8)
        // {
        // }

        ofstream file;
        file.open(name + ".txt");
        file << name << endl
             << password << endl
             << accno;
        file.close();

        system("cls");
        cout << "\n\n\t\tAccount created Successfully";
        main();
    }
    else if (choice == 2)
    {
        cin.ignore();

        /*----- checking if Login Successfull -----*/

        string username, password, usrnm, pswd, accountnumber, accno;
        bool bl = NULL;

        cout << "Enter Username: ";
        getline(cin, username);

        cout << "Enter Password: ";
        cin >> password;

        cout << "Enter A/c No : ";
        cin >> accountnumber;

        ifstream read(username + ".txt");
        getline(read, usrnm);
        getline(read, pswd);
        getline(read, accno);

        if (usrnm == username && pswd == password && accno == accountnumber)
        {
            bl = true;
        }
        else
        {
            bl = false;
        }

        /*----- checking if Login Successfull -----*/

        if (!bl)
        {
            system("cls");
            /*----- if Login not Successfull -----*/
            cout << "\n\t\t     Invalid Login!!!";
            main();
        }
        else if (bl)
        {
            system("cls");
            Account a;
            int accNo, balance, choice, deposit, withdraw;
            a.SetDefaultBalance(usrnm);

            /*----- if Login Successfull -----*/
            cout << "\n\n\t\t    Login Successfull";
            fstream fi;
            fi.open(username + ".txt");
            while (choice != 4)
            {
            strt2:
                cout << "\n\t\t ----- Banking Panel -----\n";
                cout << "\n1)Deposit Balance";
                cout << "\n2)Withdraw Balance";
                cout << "\n3)Display Current Balance";
                cout << "\n4)Show Account Information";
                cout << "\n5)Login Panel";
                cout << "\n6)Exit Program";
                cout << "\nYour Choice: ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    cout << "\nEnter Deposit Amount: ";
                    cin >> deposit;
                    a.getDeposit(deposit, usrnm);
                    break;

                case 2:
                    cout << "\nEnter Withdrawal Amount: ";
                    cin >> withdraw;
                    a.getWithdrawal(withdraw, usrnm);
                    break;

                case 3:
                    a.getBalance(usrnm);
                    break;

                case 4:
                    system("cls");
                    a.AccountInfo(usrnm, pswd, accno);
                    goto strt2;

                case 5:
                    system("cls");
                    a.SetEndCredit(usrnm);
                    goto start;

                case 6:
                    system("cls");
                    cout << "Good Bye";
                    a.SetEndCredit(usrnm);
                    exit(0);
                default:
                    system("cls");
                    cout << "\n\n\t\t  Invalid Input, Try Again";
                    goto strt2;
                }
            }
            fi.close();
            main();
        }
    }
    else if (choice == 3)
    {
        cout << "Good Bye";
        exit(0);
    }
    else
    {
        system("cls");
        cout << "\n\n\t\t  Invalid Input, Try Again";
        main();
    }
}