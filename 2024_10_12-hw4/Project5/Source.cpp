#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);

    int a[1000];
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &a[i]);
    }

    int x = 0;
    scanf_s("%d", &x);

    int blizh = a[0];
    int min_razn = abs(a[0] - x);  

    for (int i = 0; i < n; ++i)
    {
        int razn = abs(a[i] - x);  

        if (razn < min_razn || (razn == min_razn && a[i] < blizh))
        {
            blizh = a[i];  
            min_razn = razn; 
        }
    }

    printf("%d\n", blizh);

    return EXIT_SUCCESS;
}