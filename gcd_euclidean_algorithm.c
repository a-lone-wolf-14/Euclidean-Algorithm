#include<stdio.h>

int main()
{
    int a,b;
    printf("a: ");
    scanf("%i",&a);
    printf("b: ");
    scanf("%i",&b);

    if (a>b)
    {
        int r;
        while (r>=0)
        {
            r=a%b;
            if (r==0)
            {
                printf("gcd(a,b): %i",b);
            }
            a=b;
            b=r;
        }
    }
    else if (b>a)
    {
        int r;
        while (r>=0)
        {
            r=b%a;
            if (r==0)
            {
                printf("gcd(a,b): %i",a);
            }
            b=a;
            a=r;
        }
    }
    else
    {
        printf("gcd(a,b)=%i",a);
    }
    
    return 0;
}