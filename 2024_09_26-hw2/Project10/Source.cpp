#include<cstdio>

int main(int argc, char* argv[])
{
	int n = 0;

	scanf_s("%d", &n);

	if (n / 5 == 0)
	{
		printf("%d", n / 3);
	}
	else if (n % 5 == 0)
	{
		printf("%d", n / 5);
		printf(" ");
		printf("0");
	}
	else if (n % 5 != 0 && (n % 5) / 3 == 0)
	{
		printf("%d", n / 5);
		printf(" ");
		printf("%d", n / 3);
	}
	else if (n % 5 != 0 && (n % 5) / 3 != 0)
	{

	}
	return 0;
}