#include <iostream>

int main(int argc, char* argv[])
{
    int k = 0;
    scanf_s("%d", &k); // Чтение количества автоматов

    for (int i = 0; i < k; ++i)
    {
        int n = 0;
        int m = 0;
        scanf_s("%d", &n);
        scanf_s("%d", &m);  // Чтение n и m для i-го автомата

        // Вычисление нетривиальности
        int d = 19 * m + (n + 239) * (n + 366) / 2;
        printf("%d\n", d);
    }
    return EXIT_SUCCESS;
}