#include <stdio.h>
int sum_of_digits(int j)
{
    if (j == 0)
    {
        return 0;
    }
    int p = (j % 10) + sum_of_digits(j / 10);
    if (p / 10 >= 1)
    {
        j = p;
        p = sum_of_digits(j);
    }
    return p;
}
int main()
{
    int n, p;
    printf("Enter a number: ");
    scanf("%d", &n);
    p = sum_of_digits(n);
    printf("%d\n", p);
}
