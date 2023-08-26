#include <stdio.h>

int main()
{
    int i, space, rows = 7;

    for (i = 1; i <= rows; ++i)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            printf(" ");
        }

        switch (i)
        {
        case 1:
            printf("C");
            break;

        case 2:
            printf("i i");
            break;

        case 3:
            printf("s   s");
            break;

        case 4:
            printf("b     b");
            break;

        case 5:
            printf("e       e");
            break;

        case 6:
            printf("s         s");
            break;

        case 7:
            printf("tsebsiCisbest");
            break;
        }

        printf("\n");
    }
    return 0;
}
