//  1. Check Prime Number
//  2. Find Factorial
//  3. Find Power (x^n)
//  4. Find GCD of two numbers
//  5. Exit

#include <stdio.h>

int prime(int a)
{

    int b, c = 0;
    for (b = 2; b < a; b++)
    {
        if (a % b == 0)
        {
            c = 1;
        }
        else
        {
            c = c;
        };
    }
    if (c == 1)
    {
        printf("No it is not a prime number");
    }
    else
    {
        printf("Yes it is a prime number");
    }
}

int fact(int d)
{
    {
        int e, F = 1;
        for (e = 1; e <= d; e++)
        {

            F = F * e;
        }
        return F;
    }
}

int power(int g, int h)
{
    int Pow = 1;
    for (int f = 1; f <= h; f++)
    {

        Pow *= g;
    }
    return Pow;
}

int gcd(int i, int j)
{
    int l;
    int m;
    if (i > j)
    {
        while (j != 0)
        {
            m = i % j;
            if (m == 0)
            {
                return j;
                break;
            }
            else
            {
                i = j;
                j = m;
            }
        }
    }
    else
    {
        int n = i;
        i = j;
        j = n;
        while (j != 0)
        {
            m = i % j;
            if (m == 0)
            {
                return j;
                break;
            }
            else
            {
                i = j;
                j = m;
            }
        }
    }
}

int main()
{
    int p, q, P, F, Po, G, r;
    printf("Welcome to Menu-Driven Mathematical Utility Program ");
    printf("\n");
    printf("---------Menu---------");
    printf("\n");
    printf("1. Check Prime Number");
    printf("\n");
    printf("2. Factorial");
    printf("\n");
    printf("3. Power");
    printf("\n");
    printf("4. Greatest Common Divisor of Two Numbers");
    printf("\n");
    printf("5. Exit");
    printf("\n");
    printf("Enter you choice number:");
    scanf("%d", &p);

    while (p< 5)
    {
        if (p == 1)
        {
            printf("Enter the number you want to check:");

            scanf("%d", &q);

            P = prime(q);

            printf("%s", P);
            break;
        }

        if (p == 2)
        {
            printf("Enter the number you want Factorial of:");
            scanf("%d", &q);
            F = fact(q);
            printf("%d", F);
            break;
        }

        if (p == 3)
        {
            printf("Enter the number you want to  find power of:");
            scanf("%d", &q);
            printf("Enter the power you want to calculate:");
            scanf("%d", &r);
            Po = power(q, r);
            printf("%d", Po);
            break;
        }
        if (p == 4)
        {
            printf("Enter first number:");
            scanf("%d", &q);
            printf("\n");
            printf("Enter second number:");
            scanf("%d", &r);
            printf("\n");
            G = gcd(q, r);
            printf("GCD of these numbers =");
            printf("%d", G);
            break;
        }

       
    }
    if (p==5)
    {printf("Successfully exited");
    }
    
}
        