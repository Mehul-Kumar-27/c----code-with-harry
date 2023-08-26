// #include <stdio.h>

// int main()
// {

//     float centigrade, fahrenheit;
//     int x;

//     printf("\n To convert centigrade to Fahrenheit press 1");
//     printf("\n To convert Fahrenheit to centigrade press 2");
//     printf("\nEnter choice (1 or 2)");
//     scanf("\n%d", &x);

//     if (x == 1)

//     {
//         printf("\n Enter the temperatue in centigrade ");
//         scanf("%f", &centigrade);
//         fahrenheit = (1.8 * centigrade) + 32;

//         printf("\nThe temperature in fahrenheit is %.2f", fahrenheit);
//     };

//     if (x == 2)

//     {
//         printf("\n Enter the temperatue in fahrenheit  ");

//         scanf("%f", &fahrenheit);

//         centigrade = (fahrenheit - 32) / 1.8;

//         printf("\nThe temperature in centigrade is %.2f", centigrade);
//     };

//     return 0;}

#include <stdio.h>

int main()
{

    float centigrade, fahrenheit;
    int x;

    printf("\n To convert centigrade to Fahrenheit press 1");
    printf("\n To convert Fahrenheit to centigrade press 2");
    printf("\nEnter choice (1 or 2)\n");
    scanf("\n%d", &x);

    switch (x)
    {
    case  1:

    printf("\n Enter the temperatue in centigrade ");
        scanf("%f", &centigrade);
        fahrenheit = (1.8 * centigrade) + 32;

        printf("\nThe temperature in fahrenheit is %.2f", fahrenheit);
        
        break;

    case  2:

        printf("\n Enter the temperatue in fahrenheit  ");

        scanf("%f", &fahrenheit);

        centigrade = (fahrenheit - 32) / 1.8;

        printf("\nThe temperature in centigrade is %.2f", centigrade);
            
            break;
    }

    
    return 0;}

