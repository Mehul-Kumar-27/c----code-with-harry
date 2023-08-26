#include <stdio.h>
int main()
{
    int i,a,b,c;
    printf("enter a number less than 1000\n");
    scanf("%d",&i);
    if(i>99)
    {
        a=i%10;
        b=((i-a)/10)%10;
        c=((((i-a)/10)-b)/10);
        printf("%d%d%d",a,b,c);
    }
    else if(i<=99)
    {
        if(i>9)
          {a=i%10;
          b=(i-a)/10;
        printf("%d%d",a,b);
        }

        if(i<=9)
            printf("%d",i);

    }
    return 0;}