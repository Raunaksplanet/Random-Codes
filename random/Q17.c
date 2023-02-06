#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j,counter = 0 , len = 0;
    char str[10] = "naman", tmp[10];
    //printf("Enter a String -- ");
    //scanf("%s",&str);
    for ( i = 0 ; str[i]!='\0' ;i++);
    len = i;
    for ( i = len - 1, j = 0; i>= 0; i--, j++)
        tmp[j] = str[i];
    tmp[j]='\0';
    for ( i = 0 ; str[i]!='\0' ; i++)
    {
        if ( str[i] == tmp[i])
            counter++;
    }
    if ( counter == len)
        printf("String %s is Palindrome.\n\n", str);
    else
        printf("String %s is Not Palindrome.\n\n", str);

}

