#include <iostream>

int main()
{
    int size;
    printf("Введите размер массива: ");
    scanf("%d", &size);

    // Динамическое выделение памяти для массива
    int* arr = new int[size];
    int currentSize = 0; // Текущий размер массива

    printf("Введите %d элементов для заполнения массива:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Элемент %d: ", i + 1);
        scanf("%d", &arr[currentSize]);
        currentSize++;
    }

    // Показать текущий массив
    auto printArray = [&](int* arr, int size) {
        printf("Текущий массив: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        };

    printArray(arr, currentSize);

    // Основной цикл управления
    int choice;
    while (true) {
        printf("\nВыберите действие:\n");
        printf("1 - Добавить элемент в конец\n");
        printf("2 - Добавить элемент в начало\n");
        printf("0 - Завершить программу\n");
        printf("Ваш выбор: ");
        scanf("%d", &choice);

        if (choice == 0) {
            break; // Выход из программы
        }

        if (choice != 1 && choice != 2) {
            printf("Некорректный выбор. Попробуйте снова.\n");
            continue;
        }

        printf("Введите число для добавления: ");
        int newValue;
        scanf("%d", &newValue);

        // Увеличение массива для добавления элемента
        int* newArr = new int[currentSize + 1];

        if (choice == 1) {
            // Добавить в конец
            for (int i = 0; i < currentSize; i++) {
                newArr[i] = arr[i];
            }
            newArr[currentSize] = newValue;
        }
        else if (choice == 2) {
            // Добавить в начало
            newArr[0] = newValue;
            for (int i = 0; i < currentSize; i++) {
                newArr[i + 1] = arr[i];
            }
        }

        // Перенос указателя и освобождение старого массива
        delete[] arr;
        arr = newArr;
        currentSize++;

        printArray(arr, currentSize);
    }

    printf("Программа завершена.\n");

    // Освобождение памяти
    delete[] arr;
    return 0;
}