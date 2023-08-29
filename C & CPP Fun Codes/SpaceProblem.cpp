#include<iostream>
using namespace std;

int main()
{
    int x = 5, a;
    int arr[x];
    cout << "Enter elements: ";
    for(int i = 0; i < x; i++){
        int f;
        cin >> f;
        arr[i] = f;
    }

    for(int i = 0; i < x; i++){
        for(int j = i + 1; j < x; j++){
            if(arr[i] > arr[j]){
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a; 
            }
        }
    }
    for(int i = 0; i < x; i++){
        cout << arr[i];
        if (i != x - 1) {
            cout << " ";
        }
    }
    return 0;
}
