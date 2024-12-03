#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);  

    int* prices = (int*)malloc(n * sizeof(int));  
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", prices + i);  
    }

    int length = 1;  
    int maxProfit = 0;

    for (int i = 0; i < n; ++i)
    {
        bool isPeak = true;

        for (int j = i + 1; j < n; ++j)
        {
            if (*(prices + j) > *(prices + i))
            {
                isPeak = false;
                break;
            }
        }

        if (isPeak)
        {
            maxProfit += length * *(prices + i);
            length = 0;  
        }

        ++length;  
    }

    printf("%d\n", maxProfit);  

    return EXIT_SUCCESS;
}