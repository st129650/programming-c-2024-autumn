#include<iostream>

int main(int argc, char* argv[])
{
	int s = 0;
	scanf_s("%d", &s);
	printf("%d", s / 6);
	printf(" ");
	printf("%d", 2 * s / 3);
	printf(" ");
	printf("%d", s / 6);
	return EXIT_SUCCESS;
}