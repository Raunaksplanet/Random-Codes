// hello to raunak's project number 1 
#include <stdio.h>

int main(){
    int i,n;
    printf("hello there, hope you guys doing good\n");
    printf("1.Cockroach \n2.Rat \n3.Cat \n4.Dog \n5.Man \n6.Woman \nSelect a number: ");
    scanf("%d",&i);

        if(i==1){
            printf("You selected no.1:  \n\nCockroach is scared of Rat \nRat is scared of Cat \nCat is scared of Dog \nDog is scared of Man \nMan is scared of Woman \nWoman is scared of Cockroach \nHence a infite loops begins, becuase there is still no one who is brave");
        }
        else if (i==2){
            printf("You selected no.2:  \n\nRat is scared of Cat \nCat is scared of Dog \nDog is scared of Man \nMan is scared of Woman \nWoman is scared of Cockroach \nCockroach is scared of Rat \nHence a infite loops begins, becuase there is still no one who is brave");
        }
        else if(i==3){
            printf("You selected no.3:  \n\nCat is scared of Dog \nDog is scared of Man \nMan is scared of Woman \nWoman is scared of Cockroach \nCockroach is scared of Rat \nRat is scared of Cat \nHence a infite loops begins, becuase there is still no one who is brave");
        }
        else if(i==4){
            printf("You selected no.4:  \n\nDog is scared of Man \nMan is scared of Woman \nWoman is scared of Cockroach \nCockroach is scared of Rat \nRat is scared of Cat \nCat is scared of Dog \nHence a infite loops begins, becuase there is still no one who is brave");
        }
        else if(i==5){
            printf("You selected no.5:  \n\nMan is scared of Woman \nWoman is scared of Cockroach \nCockroach is scared of Rat \nRat is scared of Cat \nCat is scared of Dog \nDog is scared of Man \nHence a infite loops begins, becuase there is still no one who is brave");
        }
        else if(i==6){
            printf("You selected no.6:  \n\nWoman is scared of Cockroach \nCockroach is scared of Rat \nRat is scared of Cat \nCat is scared of Dog \nDog is scared of Man \nMan is scared of Woman \nHence a infite loops begins, becuase there is still no one who is brave");
        }

}