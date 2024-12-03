#include <iostream>


int main(int argc, char* argv[])
{
    int n = 0;

    scanf_s("%d", &n);
    int* per = new int[n];
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", per + i);
    }

    int* double_per = new int[2 * n];
    for (int i = 0; i < n; ++i)
    {
        *(double_per + i) = *(per + i);
        *(double_per + n + i) = *(per + i);
    }

    int mins = 0;
    for (int i = 1; i < n; ++i)
    {
        int j = 0;
        while (j < n && *(double_per + mins + j) == *(double_per + i + j))
        {
            ++j;
        }
        if (j >= n)
        {
            break;
        }
        if (*(double_per + mins + j) > *(double_per + i + j)) 
        {
            mins = i;
        }
    }

    
    for (int i = 0; i < n; ++i) 
    {
        printf("%d ", *(per + (mins + i) % n));
    }

    return EXIT_SUCCESS;
}