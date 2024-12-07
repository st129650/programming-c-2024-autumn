#include <iostream>

int main()
{
    int size;
    printf("������� ������ �������: ");
    scanf("%d", &size);

    // ������������ ��������� ������ ��� �������
    int* arr = new int[size];
    int currentSize = 0; // ������� ������ �������

    printf("������� %d ��������� ��� ���������� �������:\n", size);
    for (int i = 0; i < size; i++) {
        printf("������� %d: ", i + 1);
        scanf("%d", &arr[currentSize]);
        currentSize++;
    }

    // �������� ������� ������
    auto printArray = [&](int* arr, int size) {
        printf("������� ������: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        };

    printArray(arr, currentSize);

    // �������� ���� ����������
    int choice;
    while (true) {
        printf("\n�������� ��������:\n");
        printf("1 - �������� ������� � �����\n");
        printf("2 - �������� ������� � ������\n");
        printf("0 - ��������� ���������\n");
        printf("��� �����: ");
        scanf("%d", &choice);

        if (choice == 0) {
            break; // ����� �� ���������
        }

        if (choice != 1 && choice != 2) {
            printf("������������ �����. ���������� �����.\n");
            continue;
        }

        printf("������� ����� ��� ����������: ");
        int newValue;
        scanf("%d", &newValue);

        // ���������� ������� ��� ���������� ��������
        int* newArr = new int[currentSize + 1];

        if (choice == 1) {
            // �������� � �����
            for (int i = 0; i < currentSize; i++) {
                newArr[i] = arr[i];
            }
            newArr[currentSize] = newValue;
        }
        else if (choice == 2) {
            // �������� � ������
            newArr[0] = newValue;
            for (int i = 0; i < currentSize; i++) {
                newArr[i + 1] = arr[i];
            }
        }

        // ������� ��������� � ������������ ������� �������
        delete[] arr;
        arr = newArr;
        currentSize++;

        printArray(arr, currentSize);
    }

    printf("��������� ���������.\n");

    // ������������ ������
    delete[] arr;
    return 0;
}