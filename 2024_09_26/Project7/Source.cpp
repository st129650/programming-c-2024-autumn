#include<iostream>
#include<cmath>

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;
	double c = 0;

	scanf_s("%d", &k);
	scanf_s("%d", &m);
	scanf_s("%d", &n);

	if (n <= k)
	{
		printf("%d", 2 * m);
	}
	else
	{
		c = n * 2;  
		printf("%d", ceil(c / k * m));
	}

	return 0;
}