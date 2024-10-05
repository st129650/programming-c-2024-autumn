#include<iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);

    int max_age = -1;
    int index = -1;     //old mans number

    for (int i = 1; i <= n; ++i)
    {
        int age = 0;
        int gender = 0;
        scanf_s("%d", &age);
        scanf_s("%d", &gender);

        if (gender == 1)
        {
            if (age > max_age)
            {
                max_age = age;
                index = i;
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
    printf("%d\n", index);
    return EXIT_SUCCESS;
}