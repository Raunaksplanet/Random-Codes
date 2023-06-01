#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

    int arr[10], i, j, k;
    cout << "Enter elements in array: \n";

    for (i = 0; i < 10; i++)
    {
        cin >> arr[i];
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                i--;
                break;
            }
        }

        for (j = 0; j <= i; j++)
        {
            if (arr[i] < arr[j])
            {
                arr[i] = arr[i] ^ arr[j];
                arr[j] = arr[i] ^ arr[j];
                arr[i] = arr[i] ^ arr[j];
            }
        }

        system("cls");
        cout << "Enter elements in array: \n";
        for (k = 0; k <= i; k++)
        {
            cout << arr[k] << "  ";
        }
        cout << "\n";
    }
}
