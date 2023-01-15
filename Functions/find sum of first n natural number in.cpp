#include <iostream>
using namespace std;

int sum(int n)
{
    int a = 0;
    for(int i=1;i<=n;i++)
    {
        a = a + i;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n);
}
