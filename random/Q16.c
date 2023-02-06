#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j, k;
    char str[10], tmp[10];
    printf("Enter a String -- ");
    scanf("%s",&str);
    for(i = 0; str[i]!='\0'; i++)
    {
        for(j = i, k=0; str[j]!='\0'; j++){
            tmp[k++]=str[j];
            tmp[k]='\0';
            printf("%s   ",tmp);
        }
    }
}
