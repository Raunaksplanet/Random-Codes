#include<stdio.h>
#include<conio.h>
#include<string.h>
void dectobin();
void dectooct();
void dectohex();
int main()
{
    char c;
    system("cls");
    printf("Number System Operations ---- \n\n");
    printf("1. Decimal to Binary\n");
    printf("2. Decimal to Octal\n");
    printf("3. Decimal To Hexadecimal\n");
    printf("4. Exit\n");
    printf("Enter Choice --- ");
    c = getch();
    if (c == '1')
        dectobin();
    else if ( c == '2')
        dectooct();
    else if ( c == '3')
        dectohex();
    else if (c == '4')
        exit(0);

    printf("\n\nDo you want to continue .... Press 1 else any key");
    c = getch();
    if ( c == '1')
        main();
}

void dectobin()
{
    int num, tmp, arr[20], i;
   system("cls");
   printf("--------Decimal To Binary -------\n\n");
   printf("\n\nEnter Decimal Number --- ");
   scanf("%d",&num);
   tmp = num;
   for ( i = 0 ;tmp>0; i++,(tmp = tmp/2)){
        arr[i] = tmp % 2;
   }
   printf("\n\nBinary of Decimal No %d is -- ",num);
   for ( tmp = i-1; tmp >= 0 ; tmp--)
        printf("%d",arr[tmp]);
}
void dectooct()
{
    int num, tmp, arr[20], i;
   system("cls");
   printf("--------Decimal To Octal -------\n\n");
   printf("\n\nEnter Decimal Number --- ");
   scanf("%d",&num);
   tmp = num;
   for ( i = 0 ;tmp>0; i++,(tmp = tmp/8)){
        arr[i] = tmp % 8;
   }
   printf("\n\nOctal of Decimal No %d is -- ",num);
   for ( tmp = i-1; tmp >= 0 ; tmp--)
        printf("%d",arr[tmp]);
}
void dectohex()
{
    int num, tmp, arr[20], i;
   system("cls");
   printf("--------Decimal To HexaDecimal -------\n\n");
   printf("\n\nEnter Decimal Number --- ");
   scanf("%d",&num);
   tmp = num;
   for ( i = 0 ;tmp>0; i++,(tmp = tmp/16)){
        arr[i] = tmp % 16;
   }
   printf("\n\nHexaDecimal of Decimal No %d is -- ",num);
   for ( tmp = i-1; tmp >= 0 ; tmp--){
        if ( arr[tmp] >= 10 && arr[tmp]<=15)
            printf("%c",(arr[tmp]+55));
        else
            printf("%d",arr[tmp]);

   }
}
