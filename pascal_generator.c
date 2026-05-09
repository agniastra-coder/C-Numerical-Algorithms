#include <stdio.h>
int fact(int m)
{
    int j, F = 1;
    for (j = 1; j <= m; j++)
    {

        F = F * j;
    }
    return F;
}
int pascal(int n, int k)
{
    int C;
    C = fact(n) / (fact(n - k) * fact(k));
    return C;
}

int main()
{
    // Ck= n!/(n-k)!k!

    int i, p, S, q;

    q = 10;

    for (p = 0; p <= q; p++)
    {
        for (i = 0; i <= p; i++)
        {
            S = pascal(p, i);
            printf("%d"," ",S);
        }
        printf("\n");
    }
}
