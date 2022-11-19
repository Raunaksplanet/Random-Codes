// enter array element then find element given by user

#include <stdio.h>
int main(){
    int arr[10],n,f=0;
    // array value input
    for(int i=0;i<10;i++)
    {
        printf("Enter array element at %d index: ",i); scanf("%d",&arr[i]);
    }
    printf("\nEnter Elemenet you want to find: "); scanf("%d",&n);
    for(int i=0;i<10;i++)
    {
        if(arr[i]==n){
            f++;
        }
    }  
    if(f==1)
        printf("data is present in array");
    else
    printf("data is not found");
}
