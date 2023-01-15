#include<stdio.h>

void fac(int n)
{
    int facto = 1;
    while( n != 0)
    {
        facto = facto * n;
        n--;        
    }
    printf("%d ",facto);
}

int main()
{
    int n;
    scanf("%d ",&n);
    fac(n);
}
