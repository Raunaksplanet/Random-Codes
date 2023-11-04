#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
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
    void AccountInfo(string usrnm, string pswd, string PhoneNumber, int AccNo);
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
    cout << "\n\t\tEnter Any Key To Continue";
    getch();
}

void Account::getWithdrawal(int wtd, string usrnm)
{
    system("cls");
    fstream fi;
    fi.open(usrnm + ".txt", ios::app);
    try
    {
        if (balance - wtd < 0)
        {
            throw 101;
        }
        balance -= wtd;
        fi << "\nWithdrawal: " << wtd;
        cout << "\n\t\t Balance withdrawal: " << wtd;
        cout << "\n\t\t Current Balance: " << balance;
        cout << "\n\t\tEnter Any Key To Continue";
        getch();
    }
    catch (int e)
    {
        cout << "\n\t\t\tError: 101 \n\t[Can't Withdraw More Then Deposit]";
        cout << "\n\tMinimum Balance Can Withdrawal: " << balance;
        cout << "\n\tEnter Any Key To Continue";
        getch();
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

    if (amount.length() == 10)
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
    cout << "\n\t\tEnter Any Key To Continue";
    getch();
}

void Account::AccountInfo(string usrnm, string pswd, string PhoneNo, int AccNo)
{
    ifstream read(usrnm + ".txt");

    if (read.is_open())
    {

        read >> usrnm >> pswd >> AccNo >> PhoneNo;

        cout << "\n\t   ----- User's Account Details -----\n";
        cout << "Username: " << usrnm << endl;
        cout << "Password: " << pswd << endl;
        cout << "Phone Number: " << PhoneNo << endl;
        cout << "Account No: " << AccNo << endl;
        cout << "Current Balance: " << balance << endl;

        read.close();
    }
    else
    {
        cout << "File not found: " << usrnm << ".txt" << endl;
    }
    cout << "\nEnter Any Key To Continue";
    getch();
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

    string name, password, PhoneNumber;
    int AccNo;
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

        cout << "Enter Phone Number: ";
    cello:
        cin >> PhoneNumber;
        while (true)
        {
            if (PhoneNumber.length() != 10)
            {
                cout << "\nPhone Number should exact 10 Digits.\nEnter Phone Number again: ";
                cin.ignore();
                goto cello;
            }
            else
            {
                break;
            }
        }
        

        AccNo = rand() % 1000;

        ofstream file;
        file.open(name + ".txt");
        file << name << endl
             << password << endl
             << AccNo << endl
             << PhoneNumber;
        file.close();

        system("cls");
        cout << "\n\n\t\tAccount Created Successfully";
        main();
    }
    else if (choice == 2)
    {
        cin.ignore();

        /*----- checking if Login Successfull -----*/

        string username, password, usrnm, pswd, accountnumber;
        bool bl = NULL;

        cout << "Enter Username: ";
        getline(cin, username);

        cout << "Enter Password: ";
        char ch;
        int i = 0;

        while (1)
        {
            ch = getch();
            if (ch == 13)
            {
                break;
            }
            else if (ch == 8)
            {
                password[i--];
                password.pop_back();
                cout << "\b \b";
            }
            else
            {
                cout << "*";
                password += ch;
                i++;
            }
        }

        

        ifstream read(username + ".txt");
        getline(read, usrnm);
        getline(read, pswd);
        

        if (usrnm == username && pswd == password)
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
                    a.AccountInfo(usrnm, pswd, PhoneNumber, AccNo);
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