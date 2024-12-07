#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
    int k = 0;
    int m = 0;
    int n = 0;
    double c = 0;

    scanf("%d", &k);
    scanf("%d", &m);
    scanf("%d", &n);

    if (n <= k)
    {
        printf("%d", 2 * m);
    }
    else
    {
        c = n * 2;
        printf("%d", (int)ceil(c / k) * m);
    }

    return EXIT_SUCCESS;
}