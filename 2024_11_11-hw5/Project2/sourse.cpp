#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int k = 0;

    scanf_s("%d", &n);

    int* arr = new int[n];

    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", arr + i);
    }

    scanf_s("%d", &k);

    k = k % n;
    if (k < 0)
    {
        k += n;
    }

    for (int i = 0; i < n; ++i) 
    {
        int newP = (i + n - k) % n; 
        printf("%d ", *(arr + newP));
    }

    return EXIT_SUCCESS;
}