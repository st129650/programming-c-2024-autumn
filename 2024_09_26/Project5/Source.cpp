#include<cstdio> //presentation error??

int main(int argc, char* argv[])
{
	int l1 = 0;
	int w1 = 0;
	int h1 = 0;
	int l2 = 0;
	int w2 = 0;
	int h2 = 0;
	int lc = 0;
	int wc = 0;
	int hc = 0;

	scanf_s("%d", &l1);
	scanf_s("%d", &w1);
	scanf_s("%d", &h1);
	scanf_s("%d", &l2);
	scanf_s("%d", &w2);
	scanf_s("%d", &h2);
	scanf_s("%d", &lc);
	scanf_s("%d", &wc);
	scanf_s("%d", &hc);

	if (l1 <= lc && w1 <= wc && h1 <= hc) 
	{
		if (l2 <= lc - l1 && w2 <= wc && h2 <= hc)
		{
			printf("YES");
			return 0;
		}
		if (l2 <= lc && w2 <= wc - w1 && h2 <= hc)
		{
			printf("YES");
			return 0;
		}
		if (l2 <= lc && w2 <= wc && h2 <= hc - h1)
		{
			printf("YES");
			return 0;
		}
	}
	if (l1 <= lc && w1 <= wc && h1 <= hc)
	{
		if (l2 <= wc && w2 <= lc - l1 && h2 <= hc)
		{
			printf("YES");
			return 0;
		}
		if (l2 <= wc - w1 && w2 <= lc && h2 <= hc)
		{
			printf("YES");
			return 0;
		}
		if (l2 <= wc && w2 <= lc && h2 <= hc - h1)
		{
			printf("YES");
			return 0;
		}
	}
	if (w1 <= lc && l1 <= wc && h1 <= hc)
	{
		if (l2 <= lc - w1 && w2 <= wc && h2 <= hc)
		{
			printf("YES");
			return 0;
		}
		if (l2 <= lc && w2 <= wc - l1 && h2 <= hc)
		{
			printf("YES");
			return 0;
		}
		if (l2 <= lc && w2 <= wc && h2 <= hc - h1)
		{
			printf("YES");
			return 0;
		}
	}
	if (w1 <= lc && l1 <= wc && h1 <= hc)
	{
		if (w2 <= lc - w1 && l2 <= wc && h2 <= hc)
		{
			printf("YES");
			return 0;
		}
		if (w2 <= lc && l2 <= wc - l1 && h2 <= hc)
		{
			printf("YES");
			return 0;
		}
		if (w2 <= lc && l2 <= wc && h2 <= hc - h1)
		{
			printf("YES");
			return 0;
		}
	}
	else
	{
		printf("NO");
	}
	return 0;
}