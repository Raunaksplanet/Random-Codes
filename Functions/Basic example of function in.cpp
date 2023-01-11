#include <bits/stdc++.h>
using namespace std;

int max(int x,int y);

int main()
{
   int a,b;
   cout << "Enter 2 numbers: ";
   cin >> a;
   cin >> b;
   cout << "Max value is: " << max(a,b);
}

int max(int x,int y)
{
    if(x > y)
    return x;
    else 
    return y;
}
