#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);

	int s1 = 0;
	int s0 = 0;

	for (int i = 0; i < n; ++i)
	{
		int coin = 0;
		scanf_s("%d", &coin); 
		if (coin == 0)
		{
			++s0;  
		}
		else
		{
			++s1;  
		}
	}
	if (s1 >= s0)
	{
		printf("%d", s0);
	}
	else
	{
		printf("%d", s1);
	}

	return EXIT_SUCCESS;
}