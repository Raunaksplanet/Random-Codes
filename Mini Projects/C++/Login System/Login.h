#include<iostream>
#include<fstream>
using namespace std;

bool islogin(string username,string password)
{
    string usrnm, pswd;

    ifstream read("User's_Credentials\\" + username + ".txt");
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