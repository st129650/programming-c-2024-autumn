#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	scanf_s("%d", &a);

	int sum = (a / 100) + (a / 10) % 10 + a % 10;

	printf("%d", sum);
	return EXIT_SUCCESS;
}

