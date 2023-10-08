#include <iostream>
#include <fstream>
#include <windows.h>
#include "Login.h"
#include "PswdCheck.h"
#include "Register.h"
using namespace std;

int main()
{

    cout << "-----------------------------------------------------------";
    cout << "\n\n\t\tSimple Login System in C++\n";
    cout << "\n\n\t\t1.Register\n\t\t2.Login\n\t\t3.Exit\n\t\tYour Choice: ";
    int choice;
    cin >> choice;

    if (choice == 1)
    {
        system("mkdir User's_Credentials");
        system("cls");
        cout << "----------------------------------------------------------";
        cout << "\n\n\t\tSimple Login System in C++\n";
        cout << "\n\n\t\t1.Register\n\t\t2.Login\n\t\t3.Exit\n\t\tYour Choice: " << choice << endl;

        cin.ignore();
        string name, password;
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Password: ";
        ello:
        cin >> password;

        if(!checkkar(password))
        {
            cout << "\nPassword should minimum 8 characters.\nEnter passowrd again: ";
            cin.ignore();
            goto ello;
        }

        registerusr(name, password);
        system("cls");
        cout << "\n\n\t\tAccount Created Successfully\n";
        main();
    }
    else if (choice == 2)
    {
        string username, password;
        cin.ignore();

        cout << "Enter Username: ";
        getline(cin, username);
        cout << "Enter Password: ";
        cin >> password;
        

        if (!islogin(username, password))
        {
            system("cls");
            cout << "\n\n'''''''''''''''' Invalid Login, Try again ''''''''''''''''\n";
            main();
        }
        else
        {
            system("cls");
            cout << "\n\n''''''''''''''''''' Login Successfully '''''''''''''''''''\n";
            main();
        }
    }
    else if (choice == 3)
    {
        cout << "Bye Bye\n";
    }
    else
    {
        system("cls");
        cout << "\n\n'''''''''''''''' Login Option TryAgain ''''''''''''''''\n";
        main();
    }
}
