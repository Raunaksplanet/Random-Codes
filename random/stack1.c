#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 5
void push();
void pop();
void traverse();
int STACK[MAXSIZE];
int TOP = -1;
int main()
{
    char c;
    system("cls");
    printf("\n\nStack Operations\n\n");
    printf("1. Push\t2. Pop\n\n");
    printf("3. Traversal\t4. Exit\n\n");
    printf("Press Key for Perform Operation\n\n");
    c = getch();
    if ( c == '1'){
        push();
        getch();
    }
    else if ( c == '2'){
        pop();
        getch();
    }
    else if ( c == '3'){
        traverse();
        getch();
    }
    else if ( c == '4'){
        exit(0);
    }

    printf("\n\nDo you want to continue.. Press 1 else any key...");
    c = getch();
    if ( c == '1')
        main();
}

void push()
{
    int data, I;
    system("cls");
    printf("\n\nStack Push Operation\n\n");
    if ( TOP == MAXSIZE-1){
        printf("\n\nStack is Overflow\n\n");
        return;
    }
    printf("\n\nEnter Data -- ");
    scanf("%d",&data);
    TOP = TOP + 1;
    STACK[TOP] = data;
    printf("\n\nData in Stack \n");
    printf("____________________\n\n");
    for (I = TOP ; I >= 0; I--)
        printf(" %d |  %5d  |\n",I,STACK[I]);
}
void pop()
{
    int I;
    char c;
    system("cls");
    printf("\n\nStack Pop Operation\n\n");
    if ( TOP == -1){
        printf("\n\nStack is Underflow\n\n");
        return;
    }
    printf("\n\nData in Stack \n");
    printf("____________________\n\n");
    for (I = TOP ; I >= 0; I--)
        printf(" %d |  %5d  |\n",I,STACK[I]);
    printf("\n\nDo you want to pop Data from stack.. Press 1 else any key..\n\n");
    c = getch();
    if ( c == '1')
        TOP = TOP - 1;
    printf("\n\nData in Stack \n");
    printf("____________________\n\n");
    for (I = TOP ; I >= 0; I--)
        printf(" %d |  %5d  |\n",I,STACK[I]);
}
void traverse()
{
    int I;
    system("cls");
    printf("\n\nStack Traverse Operation\n\n");
    if ( TOP == -1){
        printf("\n\nStack is Underflow\n\n");
        return;
    }
    printf("\n\nData in Stack \n");
    printf("____________________\n\n");
    for (I = TOP ; I >= 0; I--)
        printf(" %d |  %5d  |\n",I,STACK[I]);
}
