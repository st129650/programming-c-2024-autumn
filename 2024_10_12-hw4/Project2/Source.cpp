#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);

    int a[1000];
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &a[i]);
    }

    int l = 0;
    int r = 0;

    scanf_s("%d", &l);
    scanf_s("%d", &r);

    int max_num = a[l - 1];
    int max_ind = l;

    for (int i = l; i <= r; ++i)
    {
        if (a[i - 1] > max_num)
        {
            max_num = a[i - 1];
            max_ind = i;
        }
    }
    printf("%d %d", max_num, max_ind);

    return 0;
}