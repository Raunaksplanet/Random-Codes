#include <iostream>
using namespace std;

int main()
{

    int arr[10], i, pos, temp[10];

    cout << "Enter elements in array: " << endl;
    for (i = 0; i < 10; i++)
    {
        cout << "Index No " << i << ": ";
        cin >> arr[i];
    }

    cout << "Enter position: ";
    cin >> pos;

    // 1 2 3 4 5 6 7 8 9 10
    // pos = 4
    // temp = 1 2 3 4
    // 5 6 7 8 9 10 1 2 3 4
    for (i = 0; i < pos; i++)
    {
        temp[i] = arr[i];
    }
    for (i = pos; i < 10; i++)
    {
        cout << arr[i] << "  ";
    }
    for (i = 0; i < pos; i++)
    {
        cout << temp[i] << "  ";
    }
}