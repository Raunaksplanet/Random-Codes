#include<iostream>
using namespace std;

int main()
{
    int a, len, r = 0, tmp;
    char str[10];
    cout << "Enter a number: ";
    cin >> a;

    itoa(a,str,10);
    r = a;
    for (len = 0; r > 0; (len++), (r = r / 10));
    
    tmp = len/2;

    (str[tmp] %2 == 0)?cout << "Even Number" : cout << "Not Even";

}