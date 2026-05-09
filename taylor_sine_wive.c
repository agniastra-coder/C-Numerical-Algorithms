#include <stdio.h>

int fact(int n)
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

int main()
{

	// sinx= x - x3/3! + x5/5! - x7/7!....

	double a;
	double D = 0;
	double S = 0;
	double x;
	double g;
	int i = 1;
	float N = 7;

	printf("Enter the angle in radians:");

	scanf("%lf", &x);

	for (i; i < N; i++)
	{
		a = fact(2 * i - 1);

		g = power(x, 2 * i - 1);

		S = g / a;

		int f = (i % 2 == 0) ? -1 : 1;

		D = D + f * S;
	}
	printf("%.2lf\n", D);

	return 0;
}
