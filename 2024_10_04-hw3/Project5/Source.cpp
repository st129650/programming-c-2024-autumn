#include<iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);  

    int roads = 0;  

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int road = 0;
            scanf_s("%d", &road);  
            if (road == 1 && i <= j)
            {
                ++roads;  
            }
        }
    }

    printf("%d", roads);
    return EXIT_SUCCESS;
}