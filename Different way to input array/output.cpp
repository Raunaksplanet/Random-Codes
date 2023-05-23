#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

    int arr[10];
    cout << "Enter elements in array:\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        system("cls");
        cout << "Enter elements in array:\n";
        for (int j = 0; j <= i; j++)
        {
            cout << arr[j] << " ";
        }
    }
    cout << "\n\n";
    cout << "Array are: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}