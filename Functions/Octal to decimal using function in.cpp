#include <iostream>
#include <math.h>
using namespace std;

int BtoD(int n)
{
	int dec = 0, i = 0, rem;
	while (n!=0)
   {
    rem = n % 10;
    n /= 10;
    dec = dec + rem * pow(8, i);
    ++i;
  }
  return dec;
}

int main()
{
    int n;
    cout << "Enter a binary number: "; 
    cin >> n;

  cout << BtoD(n);
    
}
