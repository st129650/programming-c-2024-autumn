#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;  
    scanf_s("%d", &n);  

    int A[1000];  
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &A[i]);  
    }

    int x = 0; 
    scanf_s("%d", &x);  

    int count = 0;  
    for (int i = 0; i < n; ++i)
    {
        if (A[i] == x)
        {
            ++count;  
        }
    }

    printf("%d\n", count);

    return EXIT_SUCCESS;
}