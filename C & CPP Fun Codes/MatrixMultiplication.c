#include<stdio.h>

int main(){
    int r1,r2,c1,c2,a[4][4],b[4][4],c[4][4];
    int i,j,k;
    printf("enter matrix row and column size between 1 to 4..\n");
    printf("enter matrix 1 and 2 size --");
    printf("\n\nmatrix 1 row-- "); scanf("%d",&r1);
    printf("\n\nmatrix 1 col-- "); scanf("%d",&c1);
    printf("\n\nmatrix 2 row-- "); scanf("%d",&r2);
    printf("\n\nmatrix 2 col-- "); scanf("%d",&c2);
    if(c1==r2){
        printf("\n\nenter matrix 1 element --\n\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++) 
            scanf("%d",&a[i][j]);
        }
        printf("\n\nenter matrix 2 element --\n\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            scanf("%d",&b[i][j]);
        }
        printf("\n\nMatrix Elements Are --\n\n");
        printf("\n\nMatrix 1 Elements Are --\n\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            printf("%d\t",a[i][j]);
            printf("\n");
        }
        printf("\n\nMatrix 2 Elements Are --\n\n");
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            printf("%d\t",b[i][j]);
            printf("\n");
        }
        printf("\nAfter matrix multiplication element are --\n");
        printf("\nmatrix element are--\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                for(k=0;k<c1;k++)
                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    printf("\n\n multiplication not possible\n\n");
}