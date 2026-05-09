#include <stdio.h>

double fact(int n)
{

	double F = 1;
	int j;

	for (j = 1; j <= n; j++)
	{

		F = F * j;
	}
	return F;
}

double power(double y, int z)
{
	double Power = 1; int k;

	for (k = 0; k < z; k++)

	{
		Power *= y;
	}

	return Power;
}

double sine_function(double x)
{

	// sinx= x - x3/3! + x5/5! - x7/7!....

	double a;
	double D = 0;
	double S = 0;
	double g;
	int i = 1;
	int N = 15;
	for (i; i < N; i++)
	{
		a = fact(2 * i - 1);

		g = power(x, 2 * i - 1);

		S = g / a;

		int f = (i % 2 == 0) ? -1 : 1;

		D = D + f * S;
    }
	return D;
}

double sigma_1(int n, double a, double h)
{
    double p = 0, f;
    for (int i = 1; i <= n / 2; i++)
    {
        f = a + (2 * i - 1) * h;
        p += (1.5)*power(sine_function(f),3);
    }
    return p;
}
double sigma_2(int n, double a, double h)
{
    double p = 0, f;
    for (int i = 1; i <= (n / 2) - 1; i++)
    {
        f = a + (2 * i) * h;
        p += (1.5)*power(sine_function(f),3);
    }
    return p;
}

int main()
{
    // f(x) = 3/2(sin(x^3)
    //  (h/3)[f(a)+f(b)+4*sigma(1-> n/2){f(a+(2i-1)h)}+2*sigma(1-> n/2){f(a+(2i)h)}]
    //  h = (b-a)/n

    double a, b, h, i, p = 0;
    int n;
    printf("Enter the upper limit: ");
    scanf("%lf", &b);
    printf("Enter the lower limit: ");
    scanf("%lf", &a);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n%2!=0)
    {
        printf("Please enter even number as n!\n");
    }
    else 
    {
        h = (b - a) / n;
        double I = (h / 3) * ((1.5)*sine_function(a) + (1.5)*sine_function(b) + 4 * sigma_1(n, a, h) + 2 * sigma_2(n, a, h));
        printf("%.2lf\n", I);
    }
    return 0;
}