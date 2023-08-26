#include <stdio.h>
int main()
{
    int x,a,b,c;
    printf("enter a number less than 1000\n");
    scanf("%d",&x);
    if(x>99)
    {
        a=x%10;
        b=((x-a)/10)%10;
        c=((((x-a)/10)-b)/10);
        printf("%d%d%d",a,b,c);
    }
    else if(x<=99)
    {
        if(x>9)
          {a=x%10;
          b=(x-a)/10;
        printf("%d%d",a,b);
        }

        if(x<=9)
            printf("%d",x);

    }
    return 0;}