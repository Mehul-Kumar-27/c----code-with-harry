#include <stdio.h>
int main()
{
    int n1 = 0, n2 = 1, next_Term = 0, n;
    printf("Enter the number till where we have to print the series : ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d, ", n1, n2);
    next_Term = n1 + n2;

    while (next_Term <= n)
    {
        printf("%d, ", next_Term);
        n1 = n2;
        n2 = next_Term;
        next_Term = n1 + n2;
    }

    return 0;
}