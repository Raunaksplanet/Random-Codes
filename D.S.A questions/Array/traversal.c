---------------------------------------------------------------------------------------------------------------------------------------------------
// 1) basic array traversal

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
    printf("Enter array values at %d index: ",i); scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
}
---------------------------------------------------------------------------------------------------------------------------------------------------
// 2)  array traversal using call function 

#include<stdio.h>

void display(int arr[]){
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
}

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
    printf("Enter array values at %d index: ",i); scanf("%d",&arr[i]);
    }
    display(arr);
}
---------------------------------------------------------------------------------------------------------------------------------------------------
// 3)  array traversal but array size is dynamic(user first input the size of array then values)

#include<stdio.h>

int main(){
    
    int n;
    printf("Enter array size: "); scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    printf("Enter array values at %d index: ",i); scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
}  
