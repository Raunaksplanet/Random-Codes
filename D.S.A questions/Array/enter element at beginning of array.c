--------------------------------------------------------------------------------------------------------------------------------
// 1)Enter array element at beginning (size and value you want to insert is dynamic)

#include<stdio.h>

int main(){
    int n,f;
    printf("Enter array size: "); scanf("%d",&n);
    printf("Enter array elemenet you want to insert at beginning: "); scanf("%d",&f);
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter array value at %d index: ",i); scanf("%d",&arr[i]);
    }
    for(int i=n;i>=0;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0]=f;
    n++;
    printf("\nArray element after inserting\n");
    for(int i=0;i<n;i++){
        printf("Array [%d] = %d\n",i,arr[i]);
    }
}
--------------------------------------------------------------------------------------------------------------------------------
// 4) This one will do trio work insertion at beginnig,end,given by user. Just change p value to change index value and data value to change index value.
  
#include <stdio.h>
int main(){
    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10, i, p=0,data=100;
    printf("before array element--\n");
    for (i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    for (i = n; i >= data; i--){
        arr[i + 1] = arr[i];
    }
    arr[p] = data;
    n++;
    printf("\nafter insertion array element are-- \n");
    for (i = 0; i < n; i++){
        printf("%d\t", arr[i]); 
    }
}
-----------------------------------------------------------------------------------------------------------------------------------------
