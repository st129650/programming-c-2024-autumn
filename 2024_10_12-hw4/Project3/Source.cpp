#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);

    int a[1000];
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &a[i]);
    }
    int min = a[0];
    int max = a[0];

    for (int i = 0; i < n; ++i)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == max)
        {
            a[i] = min;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }

    return EXIT_SUCCESS;
}