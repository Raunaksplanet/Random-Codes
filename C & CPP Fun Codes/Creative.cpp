#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string str = "ronak";
    // cout << "Enter String: ";
    // cin >> str;
    int c, b, a = str.length();
    c = b = a/2;
    if(a % 2 != 0)
    {
        cout << str[b] << endl;
        for(int i = 0; i <= 4; i++)
        {
            cout <<  str.substr(--b,++c) << endl;
        }
    }
}
