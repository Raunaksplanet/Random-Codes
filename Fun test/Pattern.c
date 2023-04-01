/*
So one day what happen my mentor was teaching patterns in C programming so I find a stupid way to draw
pattern using bunch of \n and * to print a basic pattern as you can see in code no.1. I told my mentor to see I made this  pattern
without loop and initializing any varible then he gave me a challenge he told me now print the same pattern without using
\n it was challenging and i failed I learned a lot but it was a very fun challenge in the end of class he told me the 
solution we can print same pattern using %c and 10 as a value of %c. For code you can check code no 2.
It's a fun story for me so I thought I should write it for future me.
thanks for keep working hard raunak.
*/
#include<stdio.h>
int main()
{
    
// 1 Code
printf("*\n* *\n* * *\n* * * *\n* * * * *");
printf("\n------------------------------\n");
// 2 Code
printf("*%c* * %c* * * %c* * * * %c* * * * *",10,10,10,10);

}