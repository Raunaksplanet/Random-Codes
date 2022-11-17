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

