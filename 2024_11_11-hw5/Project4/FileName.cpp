#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));

    int sumPositive = 0;
    int minEl = 0;
    int maxEl = 0;
    int minIndex = 0;
    int maxIndex = 0;
    int product = 1;

    scanf_s("%d", arr);
    sumPositive = (*arr > 0) ? *arr : 0;
    minEl = maxEl = *arr;
    minIndex = maxIndex = 0;

    int* ptr = arr + 1;  
    for (int i = 1; i < n; ++i)
    {
        scanf_s("%d", ptr);

        if (*ptr > 0)
        {
            sumPositive += *ptr;
        }

        if (*ptr < minEl) 
        {
            minEl = *ptr;
            minIndex = i;
        }
        if (*ptr > maxEl)
        {
            maxEl = *ptr;
            maxIndex = i;
        }

        ++ptr;  
    }

    if (minIndex > maxIndex)
    {
        int temp = minIndex;
        minIndex = maxIndex;
        maxIndex = temp;
    }

    ptr = arr + minIndex + 1; 
    for (int i = minIndex + 1; i < maxIndex; ++i)
    {
        product *= *ptr;
        ++ptr;  
    }

    printf("%d %d\n", sumPositive, product);

    return EXIT_SUCCESS;
}