#include<iostream>
#include<cmath>

int main(int argc, char* argv[])
{
	long long a = 0;
	long long b = 0;
	long long c = 0;
	long long d = 0;
	float x1 = 0;
	float x2 = 0;

	scanf_s("%lld", &a);
	scanf_s("%lld", &b);
	scanf_s("%lld", &c);

	d = b * b - 4 * a * c;

	if (a == 0 && b == 0 && c == 0) 
	{
		printf("-1");
	}
	else if (a == 0 && b == 0 && c != 0) 
	{
		printf("0");
	}
	else if (a != 0)
	{
		if (d < 0)
		{
			printf("0");
		}
		else if (d == 0)
		{
			printf("1\n");
			x1 = (-b) / (2 * (double)a);
			printf("%f", x1);
		}
		else if (d > 0)
		{
			printf("2\n");
			x1 = ((-b) - sqrt(d)) / (2 * (double)a);
			x2 = ((-b) + sqrt(d)) / (2 * (double)a);
			printf("%f", x1);
			printf("\n");
			printf("%f", x2);
		}
	}
	else
	{
		x1 = (-c) / (double)b;
		printf("1\n");
		printf("%f", x1);
	}
	return EXIT_SUCCESS;
}