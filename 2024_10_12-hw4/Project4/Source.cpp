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

    int max_yagod = 0;
    for (int i = 0; i < n; ++i)
    {
        int left = (i - 1 + n) % n;
        int right = (i + 1) % n;
        int yagodi = a[i] + a[left] + a[right];
        if (yagodi > max_yagod)
        {
            max_yagod = yagodi;
        }

    }
    printf("%d\n", max_yagod);

    return EXIT_SUCCESS;
}