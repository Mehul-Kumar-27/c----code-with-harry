#include <stdio.h>


int main(){
    int g;
    int i = 1;
     printf("\n Enter the integer ");
     scanf("%d", &g);


     printf(" \n The multiplication table of %d is ", g);
    do
    {
       
        printf("\n %d * %d= %d " ,g, i, g*i );
        i++;
    } while (i<=10);


    return 0;}

