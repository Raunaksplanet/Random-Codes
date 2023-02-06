#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insertion();
void deletion();
void traverse();
void search();
struct NODE
{
    int DATA;
    struct NODE *NEXT;
}*PTR = NULL;
int main()
{
    char c;
    system("cls");
    printf("\n\nLink List Operations\n\n");
    printf("1. Insertion\t2. Deletion\n\n");
    printf("3. Traversal\t4. Search\n\n");
    printf("5. Exit\n\n");
    printf("Press Key for Perform Operation\n\n");
    c = getch();
    if ( c == '1'){
        insertion();
        getch();
    }
    else if ( c == '2'){
        deletion();
        getch();
    }
    else if ( c == '3'){
        traverse();
        getch();
    }
    else if ( c == '4'){
        search();
        getch();
    }
    else if ( c == '5'){
        exit(0);
        getch();
    }
    printf("\n\nDo you want to continue.. Press 1 else any key...");
    c = getch();
    if ( c == '1')
        main();
}

void insertion()
{
    system("cls");
    int data;
    struct NODE *TEMPNODE, *TEMP;
    printf("\n\nLink List Insertion Operation..\n\n");
    TEMPNODE = (struct NODE *)malloc(sizeof(struct NODE));
    if ( TEMPNODE == NULL)
    {
        printf("\n\nInsufficient Memory..\n\n");
        return;
    }
    printf("Enter Data To Insert --");
    scanf("%d",&data);
    TEMPNODE->DATA = data;
    if ( PTR == NULL)
    {
        TEMPNODE->NEXT = NULL;
        PTR = TEMPNODE;
    }
    else
    {
        TEMPNODE->NEXT = PTR;
        PTR = TEMPNODE;
    }
    printf("\n\nDATA in Link List..\n\n");
    TEMP = PTR;
    while(TEMP!=NULL)
    {
        printf(" %d ->",TEMP->DATA);
        TEMP=TEMP->NEXT;
    }
    printf("  NULL \n\n");
}
void deletion()
{
    char c;
    struct NODE *TEMP;
    system("cls");
    printf("\n\nLink List Deletion Operation..\n\n");
    if ( PTR == NULL)
    {
        printf("\n\nLink List is Empty..\n\n");
        return;
    }
    TEMP = PTR;
    printf("\n\nDo you want to Delete Node-- Press 1 else any key...\n\n");
    c = getch();
    if ( c == '1')
    {
        PTR = PTR->NEXT;
        free(TEMP);
    }
    printf("\n\nData of Link List..\n\n");
    TEMP = PTR;
    while(TEMP!=NULL)
    {
        printf(" %d ->",TEMP->DATA);
        TEMP=TEMP->NEXT;
    }
    printf("  NULL \n\n");
}
void traverse()
{
    system("cls");
    struct NODE *TEMP;
    printf("\n\nLink List Traversal Operation..\n\n");
    if ( PTR == NULL)
    {
        printf("\n\nLink List is Empty..\n\n");
        return;
    }
    TEMP = PTR;
    while(TEMP!=NULL)
    {
        printf(" %d ->",TEMP->DATA);
        TEMP=TEMP->NEXT;
    }
    printf("  NULL \n\n");
}
void search()
{
    int data, counter=0;
    system("cls");
    struct NODE *TEMP;
    printf("\n\nLink List Search Operation..\n\n");
    if ( PTR == NULL)
    {
        printf("\n\nLink List is Empty..\n\n");
        return;
    }
    printf("Enter Data for Search -- ");
    scanf("%d",&data);
    TEMP = PTR;
    while(TEMP!=NULL)
    {
        if(TEMP->DATA == data)
        {
            printf("\n\nData %d is Found \n\n", data);
            counter=1;
            break;
        }
        TEMP=TEMP->NEXT;
    }
    if ( counter == 0)
        printf("\n\nData %d is Not Found \n\n", data);
}
