#include <stdio.h>

int main()
{

    int bob[5];
    int alice[5];

    printf("Enter the toy numbers for BOB \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &bob[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            int temp;
            if (bob[i] > bob[j])
            {
                temp = bob[i];
                bob[i] = bob[j];
                bob[j] = temp;
            }
        }
    }

    printf("Toys in asending order for Bob are \n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", bob[i]);
    }

    printf("\n\n");

    printf("Enter the toy numbers for Alice \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &alice[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            int temp;
            if (alice[i] < alice[j])
            {
                temp = alice[i];
                alice[i] = alice[j];
                alice[j] = temp;
            }
        }
    }

    printf("Toys in desending order for Alice are \n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", alice[i]);
    }

    return 0;
}