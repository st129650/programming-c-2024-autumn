#include<iostream>

int gcd(int a, int b)    //nod
{
    while (b != 0)
    {
        int c = b;
        b = a % b;
        a = c;
    }
    return a;
}

int main(int argc, char* argv[])
{
    int n = 0;
    int m = 0;
    scanf_s("%d", &n);
    scanf_s("%d", &m);

    int nod = gcd(n, m);
    int slices = n / nod;

    printf("%d", slices);

    return 0;
}