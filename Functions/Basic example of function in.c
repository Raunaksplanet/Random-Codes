#include<stdio.h>

int max(int x,int y);

int main()
{
   int a,b;
    printf("Enter two numbers to find maxium: ");
    scanf("%d %d",&a,&b);
    printf("The maxium number is: %d",max(a,b));
}

int max(int x,int y)
{
    if(x > y)
    return x;
    else 
    return y;
}
