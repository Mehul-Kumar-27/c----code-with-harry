#include <stdio.h>

int main()
{

    int n1, n2, n3;
    printf("\n Enter the value of n1, n2, n3");
    scanf("%d %d %d", &n1,&n2,&n3);

    if (n1 > n2 >= n3 || n1 > n3 >= n2)
    
        printf("\n %d is the greatest number ", n1);


    else if (n2 > n1 >= n3 || n2 > n3 > n1)
        

            printf("\n %d is the greatest number ", n2);
        
    
    else
    

        printf("\n %d is the greatest number ", n3);
    

    return 0;}