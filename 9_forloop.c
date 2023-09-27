#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */

    int count = 0;
    printf("count %d \n", count);
    for (int i = 0; i <= 25; i++)
    {

        count = i;
        printf("count %d \n", count);
    }
    printf("count %d", count);
    return 0;
}
