#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));

    int* arrPtr = arr;
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", arrPtr);
        ++arrPtr;
    }

    int* thr = (int*)malloc(n * sizeof(int)); 
    int* four = (int*)malloc(n * sizeof(int));  
    int thrCount = 0, fourCount = 0; 

    int* arrStart = arr;
    for (int i = 0; i < n; ++i) 
    {
        if (*arrStart % 2 == 1)
        { 
            *(thr + thrCount) = *arrStart;
            ++thrCount;
        }
        else
        { 
            *(four + fourCount) = *arrStart;
            fourCount++;
        }
        ++arrStart;
    }

    int* threesPtr = thr;
    for (int i = 0; i < thrCount; ++i)
    {
        printf("%d ", *threesPtr); 
        ++threesPtr;
    }
    printf("\n");

    int* fourPtr = four;
    for (int i = 0; i < fourCount; ++i)
    {
        printf("%d ", *fourPtr); 
        ++fourPtr;
    }
    printf("\n");

    if (fourCount >= thrCount)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    free(arr);
    free(thr);
    free(four);

    return EXIT_SUCCESS;
}