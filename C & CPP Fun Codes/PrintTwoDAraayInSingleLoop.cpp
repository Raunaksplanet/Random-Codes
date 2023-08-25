#include <iostream>  
using namespace std;

int main()  
{  
    int arr[3][3] = {1,2,3,4,5,6,7,8,9}, i;
    cout << "Elements in 2D Array" << endl;

    for(i=0;i<3;i++)
    {
        printf("%d  %d  %d\n",arr[i][0],arr[i][1],arr[i][2]);
    }    
}