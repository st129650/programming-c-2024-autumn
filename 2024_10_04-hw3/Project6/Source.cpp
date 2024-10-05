#include <iostream>

int gcd(int a, int b)
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
    int a = 0;
    int b = 0;
    scanf_s("%d", &a);
    scanf_s("%d", &b);

    int nod = gcd(a, b);
    int nok = (a * b) / nod;
    printf("%d\n", nok);
    return 0;
}