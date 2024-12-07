#include <iostream>
#include <cstdlib> 

void printArray(int* arr, int size)
{
    std::cout << "current array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int* addToEnd(int* arr, int& size, int newValue)
{
    int* newArr = (int*)malloc((size + 1) * sizeof(int));
    for (int i = 0; i < size; ++i)
    {
        newArr[i] = arr[i];
    }
    newArr[size] = newValue;
    free(arr);
    ++size;
    return newArr;
}

int* addToBegin(int* arr, int& size, int newValue)
{
    int* newArr = (int*)malloc((size + 1) * sizeof(int));
    newArr[0] = newValue;
    for (int i = 0; i < size; ++i)
    {
        newArr[i + 1] = arr[i];
    }
    free(arr);
    ++size;
    return newArr;
}

int* removeFromEnd(int* arr, int& size)
{
    if (size == 0) return arr;
    int* newArr = (int*)malloc((size - 1) * sizeof(int));
    for (int i = 0; i < size - 1; ++i)
    {
        newArr[i] = arr[i];
    }
    free(arr);
    --size;
    return newArr;
}

int* removeFromBegin(int* arr, int& size)
{
    if (size == 0) return arr;
    int* newArr = (int*)malloc((size - 1) * sizeof(int));
    for (int i = 1; i < size; ++i)
    {
        newArr[i - 1] = arr[i];
    }
    free(arr);
    --size;
    return newArr;
}

int main()
{
    int size;
    std::cout << "enter the size of the array: ";
    std::cin >> size;

    int* arr = (int*)malloc(size * sizeof(int));
    int currentSize = 0; 

    std::cout << "enter " << size << " elements to fill the array:" << std::endl;
    for (int i = 0; i < size; ++i)
    {
        std::cout << "element " << i + 1 << ": ";
        std::cin >> arr[currentSize];
        ++currentSize;
    }

    printArray(arr, currentSize);

    int choice;
    while (true) 
    {
        std::cout << "\nselect the action:\n";
        std::cout << "1 - add element at end\n";
        std::cout << "2 - add element to top\n";
        std::cout << "3 - remove element from end\n";
        std::cout << "4 - remove item from top\n";
        std::cout << "0 - complete the programme\n";
        std::cout << "your choice: ";
        std::cin >> choice;

        if (choice == 0)
        {
            break; 
        }

        if (choice < 0 || choice > 4)
        {
            std::cout << "incorrect selection, please try again\n";
            continue;
        }

        if (choice == 1 || choice == 2)
        {
            std::cout << "enter the number to add: ";
            int newValue;
            std::cin >> newValue;

            if (choice == 1)
            {
                arr = addToEnd(arr, currentSize, newValue);
            }
            else if (choice == 2)
            {
                arr = addToBegin(arr, currentSize, newValue);
            }
        }
        else if (choice == 3) 
        {
            arr = removeFromEnd(arr, currentSize);
        }
        else if (choice == 4) 
        {
            arr = removeFromBegin(arr, currentSize);
        }

        printArray(arr, currentSize);
    }

    free(arr);
    return 0;
}