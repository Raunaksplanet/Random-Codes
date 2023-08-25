#include <stdio.h>
#include <string.h>
int main(){
    char c[20] = "NITIN";
    char d[20];

    strcpy(d,c);
    strrev(d);
    (strcmpi(c,d)==0)?printf("Given name is a palindrome"):printf("Give name is not a palindrome");
}

// longer code then upper one---

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char c[20] = "NITIN";
//     char d[20];

//     strcpy(d,c);
//     strrev(d);
//     if(strcmpi(c,d)==0)
//     printf("Given name is a palindrome");
//     else
//     printf("Give name is not a palindrome");
// }