#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i, j,k;
    char str[50] = "My Name is Jatin", tmp[50]="", tmp1[50];
    //printf("Enter a String -- ");
    //scanf("%s",&str);
    for ( i = 0, k=0 ; str[i]!='\0' ; i++)
    {
        if ( str[i]!=32)
        {
            tmp1[k++]=str[i];
            if ( str[i+1] == '\0'){
                tmp1[k] = '\0';
                strcat(tmp,strrev(tmp1));
            }
        }
        else{
            tmp1[k] = '\0';
            strcat(tmp,strrev(tmp1));
            strcat(tmp," ");
            k = 0;
        }
    }
    printf("%s",tmp);
}

