#include <iostream>  //?????????

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);

    int v[100];
    int p[100];
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &v[i]);
    }

    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &p[i]);
    }
    int max_firm_nul = 0;  
    double max_nul = v[0] * (p[0] / 100.0);

    for (int i = 1; i < n; ++i)
    {
        double nul = v[i] * (p[i] / 100.0);  
        if (nul > max_nul)
        {
            max_nul = nul;
            max_firm_nul = i;  
        }
    }

    printf("%d", max_firm_nul + 1);

    return EXIT_SUCCESS;
}