#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int dec = 0, i = 0, rem,n;
    cout << "Enter a number: "; 
    cin >> n;

  while (n!=0)
   {
    rem = n % 10;
    n /= 10;
    dec = dec + rem * pow(8, i);
    ++i;
  }
  cout << dec;
    
}
