#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 5
void push();
void pop();
void traverse();
int QUEUE[MAXSIZE];
int FRONT = -1;
int REAR = -1;
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
    printf("\n\nQueue Push Operation\n\n");
    if ( REAR == MAXSIZE-1 && FRONT == 0)
    {
        printf("\n\nQueue is Overflow\n\n");
        return;
    }
    printf("\n\nEnter Element -- ");
    scanf("%d",&data);
    if ( REAR == -1)
    {
        REAR = REAR + 1;
        FRONT = FRONT + 1;
        QUEUE[REAR] = data;
    }
    else if ( REAR == MAXSIZE-1 && FRONT != 0)
    {
        for(I=FRONT; I<=REAR; I++)
            QUEUE[I-1] = QUEUE[I];
        QUEUE[REAR] = data;
        FRONT = FRONT - 1;
    }
    else{
        REAR = REAR + 1;
        QUEUE[REAR] = data;
    }
    printf("\n\nQUEUE Elements -- \n\n");
    for ( I = FRONT ; I<=REAR; I++)
        printf("%d   ", QUEUE[I]);
}
void pop()
{
    int I;
    char c;
    system("cls");
    printf("\n\nQueue Pop Operation\n\n");
    if ( REAR == -1 && FRONT == -1)
    {
        printf("\n\nQueue is underflow\n\n");
        return;
    }
    printf("\n\nQUEUE Elements -- \n\n");
    for ( I = FRONT ; I<=REAR; I++)
        printf("%d   ", QUEUE[I]);
    printf("\n\nDo you want to delete element from queue. Press 1 else any key..\n\n");
    c = getch();
    if ( c == '1')
    {
        if ( REAR == FRONT){
            REAR = FRONT = -1;
        }
        else{
            FRONT = FRONT + 1;
        }
    }
    printf("\n\nQUEUE Elements -- \n\n");
    for ( I = FRONT ; I<=REAR; I++)
        printf("%d   ", QUEUE[I]);
}
void traverse()
{
    int I;
    system("cls");
    printf("\n\nQueue Traverse Operation\n\n");
    if ( REAR == -1 && FRONT == -1)
    {
        printf("\n\nQueue is underflow\n\n");
        return;
    }
    printf("\n\nQUEUE Elements -- \n\n");
    for ( I = FRONT ; I<=REAR; I++)
        printf("%d   ", QUEUE[I]);

}
