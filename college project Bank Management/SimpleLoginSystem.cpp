#include <iostream>
#include <fstream>
using namespace std;
#define MIN_BALANCE 500

/*-------------------------------- Bank Management start --------------------------------*/
class Account
{
    string FullName;
    int accountNumber;
    int balance = 0;

public:
    int getBalance();
    void getWithdrawal(int wtd);
    int getDeposit(int dpo);
};

int Account::getBalance()
{
    system("cls");
    cout << "\n\t\t -----  Banking Panel -----\n";
    return balance;
}

void Account::getWithdrawal(int wtd)
{
    system("cls");
    cout << "\n\t\t ----- Banking Panel -----\n";
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
    cout << "\n\t\t ----- Banking Panel -----\n";
    fstream fi;
    fi.open("account.txt");
    balance += dpo;
    fi << "\nDeposit: " << dpo;
    fi.close();
    return balance;
}

/*-------------------------------- Bank Management end --------------------------------*/

int main()
{


        static string name, password, accno;
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
            if (password.length()-1 <= 8)
            {
                cout << "\nPassword should minimum 8 characters.\nEnter password again: ";
                cin.ignore();
                goto ello;
            }

            cout << "Enter A/c No : ";
            cin >> accno;

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
                cout << "Invalid Login!!!" << endl;
                main();
            }
            else if (bl)
            {
                system("cls");
                cout << "\n\n\t\t    Login Successfull";

                /*----- if Login Successfull -----*/ 

            fstream fi;
            fi.open(username + ".txt");

            Account a;
            int accNo, balance, choice, deposit, withdraw;

            start2:
            cout << "\n\t\t ----- Banking Panel -----\n";

            while (choice != 4)
            {
                cout << "\n1)Deposit Balance";
                cout << "\n2)Withdraw Balance";
                cout << "\n3)Display Current Balance";
                cout << "\n4)Login Panel";
                cout << "\n5)Exit Program";
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
                system("cls");
                    goto start;
                case 5:
                    cout << "Good Bye";
                    exit(0);
                default:
                system("cls");
                    cout << "\n\n\t\t  Invalid Input, Try Again";
                    goto start2;
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