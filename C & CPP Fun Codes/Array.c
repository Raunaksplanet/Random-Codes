#include <stdio.h>
int main()
{
    int n,m1=0,m2;
    printf("Enter array size: "); scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter array element at %d index: ",i); scanf("%d",&arr[i]);
    } 
    
    for(int i=0;i<n;i++){
        if(arr[i]>m1)
            m1=arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<m2)
        m2=arr[i];
    }
    
    printf("\nHighest value in array is: %d\n",m1);
    printf("Lowest value in array is: %d\n",m2);
}