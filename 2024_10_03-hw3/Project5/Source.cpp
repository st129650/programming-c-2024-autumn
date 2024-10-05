#include<iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);  // ¬водим количество городов

    int roads = 0;  // ѕеременна€ дл€ подсчета количества дорог

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j) 
        {
            int road = 0;
            scanf_s("%d", &road);  // ¬водим элемент матрицы, показывающий наличие дороги
            if (road == 1 && i <= j)
            {
                ++roads;  // —читаем дороги только один раз (поскольку матрица симметрична)
            }
        }
    }
    printf("%d", roads);
    return EXIT_SUCCESS;
}
