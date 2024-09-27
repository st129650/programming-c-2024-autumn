#include<iostream>
#include<cmath>

int main(int argc, char* argv[])
{
	int m = 0;
	int n = 0;

	scanf_s("%d", &m);
	scanf_s("%d", &n);

	printf("%d", 2 * ((n + 1) * m + (m + 1) * n) - (m + n));

	return 0;
}