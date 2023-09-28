#include <stdio.h>

int main(int argc, char const *argv[])
{
    // break keyword

    for (int i = 0; i <= 10; i++)
    {
        if (i == 7)
        {
            break;
        }
        // printf("I value: %d \n", i);
    }

    // continue keyword
    for (int i = 0; i <= 10; i++)
    {
        if (i == 6)
        {
            continue;
        }
        printf("I value: %d \n", i);
    }

    return 0;
}
