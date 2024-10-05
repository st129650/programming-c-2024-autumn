#include <iostream>

int main()
{
    int n = 0;
    scanf_s("%d", &n); // Чтение количества жильцов

    int max_age = -1; // Хранит максимальный возраст
    int index = -1; // Хранит индекс (номер) самого старшего мужчины

    for (int i = 1; i <= n; ++i)
    {
        int age = 0;
        int gender = 0;
        scanf_s("%d", &age);
        scanf_s("%d", &gender);  // Чтение возраста и пола

        // Проверяем, является ли житель мужчиной
        if (gender == 1)
        {
            // Если это самый старший мужчина или если это первый найденный мужчина
            if (age > max_age)
            {
                max_age = age;
                index = i; // Запоминаем номер
            }
            else if (age == max_age)
            {
                if (i < index)
                {
                    index = i;
                }
            }
        }
    }
    // Если мужчин не было найдено, index останется -1
    printf("%d\n", index);
    return 0;
}