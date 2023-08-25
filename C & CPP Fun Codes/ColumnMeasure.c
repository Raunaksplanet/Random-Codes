#include <stdio.h>  
void main ()  
{  
    int arr[3][3],i,j,sum[3];   
    for (i=0;i<3;i++)  {  
        for (j=0;j<3;j++){  
            printf("Enter a[%d][%d]: ",i,j);              
            scanf("%d",&arr[i][j]);  
        }  
    }  
    printf("\n sumn of column elements\n");   
    for(i=0;i<3;i++){  
        sum[i]=0;
        for (j=0;j<3;j++){  
            printf("%d\t",arr[i][j]);
            sum[i] = sum[i] + arr[j][i];  
        }  
        printf("\n");
    }
    printf("\n-------------------\n");
    for(i = 0;i<3;i++){
        printf("%d\t",sum[i]);
    }  
}