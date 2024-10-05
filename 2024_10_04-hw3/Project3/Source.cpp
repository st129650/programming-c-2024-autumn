#include<iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int b = 437;
    scanf_s("%d", &n);

    for (int i = 1; i <= n; ++i)
    {
        int b0 = 0;
        scanf_s("%d", &b0);

        if (b0 <= b)
        {
            printf("Crash ");
            printf("%d", i);
            return 0;
        }
    }
    printf("No crash");
    return 0;
}