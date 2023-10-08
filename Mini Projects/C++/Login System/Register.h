#include <iostream>
#include <fstream>
using namespace std;

void registerusr(string name, string password)
{
    ofstream file;
    file.open("User's_Credentials\\" + name + ".txt");
    file << name << endl << password;
    file.close();
}