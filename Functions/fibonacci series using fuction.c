#include<stdio.h>
void fab(int c)
{
    int a=1,b=2,d;
    for(int i=1;i<=c;i++)
    {
        printf("%d ",a);
        d = a + b;
        a = b;
        b = d; 
    }
    return;
}
int main()
{
    int c;
    scanf("%d ",&c);
    fab(c);
    return 0;
}
