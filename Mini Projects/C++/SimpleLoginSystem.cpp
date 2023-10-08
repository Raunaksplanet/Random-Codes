#include <iostream>
#include <fstream>
using namespace std;

bool islogin()
{
    string username, password, usrnm, pswd;

    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;
    ifstream read(username + ".txt");
    getline(read, usrnm);
    getline(read, pswd);

    if (usrnm == username && pswd == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << "\n\n\t\tSimple Login System in C++\n";
    cout << "1. Register\n2. Login\nYour Choice: ";
    int choice;
    cin >> choice;

    if (choice == 1)
    {

        string name, password;
        cout << "Enter Name: "; cin >> name;
        cout << "Enter Password: "; cin >> password;

        ofstream file;
        file.open(name + ".txt");
        file << name << endl
             << password;
        file.close();
        main();
    }
    else if (choice == 2)
    {
        bool bl = islogin();
        if (!bl)
        {
            cout << "Invalid Login!!!" << endl;
            cin.get();
            return 0;
        }
        else if (bl)
        {
            cout << "Login Successfully!!!" << endl;
            cin.get();
            return 1;
        }
    }
    else
    {
        cout << "Invalid Input, Try Again\n";
    }

    return 0;
}
