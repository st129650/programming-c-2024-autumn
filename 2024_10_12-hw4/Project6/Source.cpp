#include <iostream>  //?????????
#include <cmath>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);

    int v[100];
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &v[i]);
    }
    int p[100];
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &p[i]);
    }
    int max_firm_nul = 0;  
    double max_nul = 0;  

    for (int i = 0; i < n; ++i)
    {
        double nul = v[i] * p[i] / 100;  
        if (nul > max_nul)
        {
            max_nul = nul;
            max_firm_nul = i + 1;  
        }
    }

    printf("%d", max_firm_nul);

    return EXIT_SUCCESS;
}