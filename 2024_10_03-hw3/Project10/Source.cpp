#include<iostream>

int main(int argc, char* argv[])
{
    int n; 
    scanf("%d", &n);  

    int max_thaw = 0;      //max lenght of thaw
    int current_thaw = 0;  //current lenght of thaw

    for (int i = 0; i < n; ++i)
    {
        int temperature = 0;
        scanf("%d", &temperature);  //daily temp

        if (temperature > 0)
        {
            ++current_thaw;
        }
        else
        {
            if (current_thaw > max_thaw)  //update the max lenght and sbrasivaem the current one
            {
                max_thaw = current_thaw;
            }
            current_thaw = 0;
        }
    }

    if (current_thaw > max_thaw)
    {
        max_thaw = current_thaw;
    }

    printf("%d\n", max_thaw);

    return EXIT_SUCCESS;
}