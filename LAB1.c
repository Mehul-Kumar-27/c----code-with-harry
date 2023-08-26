#include <stdio.h>
int main()
{

    int n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // if n1 is greater than both n2 and n3, n1 is the largest
    if (n1 > n2 && n1 > n3)
        printf("%d is the largest number.\n", n1);

    // if n2 is greater than both n1 and n3, n2 is the largest
    if (n2 > n1 && n2 > n3)
        printf("%d is the largest number.\n", n2);

    // if n3 is greater than both n1 and n2, n3 is the largest
    if (n3 > n1 && n3 > n2)
        printf("%d is the largest number.\n", n3);

    // if n1 and n2 are equal and greater than n3
    if (n1 == n2 && n2 > n3)
        printf("%d is the largest number.\n", n1);

    // if n3 and n2 are equal and greater than n1
    if (n3 == n2 && n2 > n1)
        printf("%d is the largest number.\n", n3);

    // if n3 and n1 are equal and greater than n2
    if (n3 == n1 && n3 > n2)
        printf("%d is the largest number.\n", n3);

    // if all numbers are equal
    if (n3 == n1 && n3 == n2)
        printf("%d is largest and all numbers are equal. \n ", n1);

    return 0;
}
