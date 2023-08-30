#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string str = "raunaks";
    // cout << "Enter String: ";
    // cin >> str;

    int c = 1, b, a = str.length();
    if (a % 2 != 0)
    {
        b = a / 2;
        cout << str[b] << endl;
        for (int i = 1,j=2,c = 1; i <= a / 2 + 1; i++,++j)
        {
            
            cout << setw() << str.substr(--b, ++j) << endl;
        }
    }
}
