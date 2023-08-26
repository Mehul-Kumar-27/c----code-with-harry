#include <stdio.h>

void leap_year_return(int a)
{

    if (a < 1752)
    {
        printf("The year is not a leap year \n");
    }

    else
    {

        if (a % 100 == 0)
        {

            if (a % 400 == 0)
            {
                printf("The year is a leap year \n");
            }
            else
            {
                printf("The year is not a leap year \n");
            }
        }

        else
        {

            if (a % 4 == 0)
            {
                printf("The year is a leap year \n");
            }
            else
            {
                printf("The year is not a leap year \n");
            }
        }
    }
}

int main()
{

    printf("Enter a year \n");

    int year;
    scanf("%d", &year);

    leap_year_return(year);

    return 0;
}

// int main()
// {

//     int year;
//     printf("Enter the year \n");
//     scanf("%d", &year);

//     if (year < 1752)
//     {
//         printf("The year is not a leap year \n");
//     }

//     else
//     {

//         if (year % 100 == 0)
//         {

//             if (year % 400 == 0)
//             {
//                 printf("The year is a leap year \n");
//             }
//             else
//             {
//                 printf("The year is not a leap year \n");
//             }
//         }

//         else
//         {

//             if (year % 4 == 0)
//             {
//                 printf("The year is a leap year \n");
//             }
//             else
//             {
//                 printf("The year is not a leap year \n");
//             }
//         }
//     }

//     return 0;
// }
