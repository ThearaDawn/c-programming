#include <stdio.h>

// if(condition_expression) {
//     // exec statement.
// }

int main(int argc, char const *argv[])
{
    /* code */

    for (int i = 0; i < 15; i++)
    {
        // exec statement
        if ((i % 2) != 0)
        {
            printf("value is odd \n: %d ", i);
        }
        else
        {
            printf("value is even \n: %d ", i);
        }
    }
    return 0;
}
