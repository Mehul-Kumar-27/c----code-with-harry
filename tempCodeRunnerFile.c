#include<stdio.h>
#include<math.h>

int main(){

    int integer, rem;
    int binary_number = 0; 
    int i = 0;
    printf("Enter the number to be converted into binary \n ");
    scanf("%d", &integer);

    while (integer!=0)

    {
        rem = integer%2;
        integer = integer/2;
        binary_number= binary_number+ rem*pow(10, i);
        i++;
        
    }
    printf("The binary conversion of the integer is : %d",binary_number);
    return 0;
}