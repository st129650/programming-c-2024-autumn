#include<iostream>
#include<cmath>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	float x1 = 0;
	float x2 = 0;

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	d = b * b - 4 * a * c;

	if (a == 0)
	{
		if (b != 0)
		{
			printf("1\n");
			printf("%f", (-c) / b);
		}
		if (b == 0)
		{
			printf("-1");
		}
	}
	if ((a != 0) and (b == 0) and (c == 0))
	{
		printf("1\n");
		printf("0");
	}
	else
	{
		if (d >= 0)
		{
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			if (x1 == x2)
			{
				printf("1\n");
				printf("%f", x1);
			}
			else
			{
				printf("2\n");
				printf("%f", x1);
				printf("%f", x2);

			}
		}

	}
	return 0;
}