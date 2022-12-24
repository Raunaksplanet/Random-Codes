//New code:- update date:- Thursday 24 November 2022
#include <stdio.h>
int main(){
    char plate[4][20]={"Roti","Salad","Panner","Rice"};
    printf("Your plate contains: \n");
    for(int i=0;i<3;i++)
    {
        printf("%s \n\n",plate[i]);
    }
}


// Old code:- Now I,m questioning myself how I can write this type of code
// to print an character array hahaha(ofcourse I wrote upper code after i studied character array that's why old code is little stupid)

// #include <stdio.h>
// int main(){
//     char plate[]={"roti" "salad" "panner" "rice"};
//     printf("Your plate contains: \n");
//     printf("%c%c%c%c\n",plate[0],plate[1],plate[2],plate[3]);
//     printf("%c%c%c%c%c\n",plate[4],plate[5],plate[6],plate[7],plate[8]);
//     printf("%c%c%c%c%c%c\n",plate[9],plate[10],plate[11],plate[12],plate[13],plate[14]);
//     printf("%c%c%c%c\n",plate[15],plate[16],plate[17],plate[18]);
// }
