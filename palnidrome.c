// #include<stdio.h>

// #include <stdio.h>
// int main() {
//   int n, reversed = 0, remainder, original;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     original = n;

  
//     while (n != 0) {
//         remainder = n % 10;
//         reversed = reversed * 10 + remainder;
//         n = n/ 10;
//     }

    
//     if (original == reversed)
//         printf("%d is a palindrome.", original);
//     else
//         printf("%d is not a palindrome.", original);

//     return 0;
// }



#include <stdio.h>
int main()
{
    int num, reverse_num = 0;

    printf("Enter a Number : ");
    scanf("%d", &num);

     int digit;
    int rem=0, prev_rem = 0;

    for (int i = 10; rem != num; i *= 10)
    {
        rem = num % i;
        digit = (rem - prev_rem) * 10 / i;
        reverse_num = (reverse_num * 10) + digit;
        prev_rem = rem;
    }

    if (num == reverse_num)
        printf("The number %d is palindrome\n", num);
    else
        printf("The number %d is not palindrome\n", num);
    return 0;
}