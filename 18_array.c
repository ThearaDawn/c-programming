
#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */

    // int a = 1;
    // int b = 2;
    // int c = 3;
    // printf("a = %d, b = %d, c = %d\n", a, b, c);

    int arr[3] = {1, 2, 3};

    // printf("Array %d", arr[2]);

    for (int i = 0; i < 3; i++)
    {
        // printf("Array %d \n", arr[i]);
    }

    int weeks[7];
    weeks[0] = 1;
    weeks[1] = 2;
    weeks[2] = 3;
    weeks[3] = 4;
    weeks[4] = 5;
    weeks[5] = 6;
    weeks[6] = 7;

    for (int w = 0; w < 7; w++)
    {
        // printf("Weeks %d \n", weeks[w]);
    }

    int days[7] = {[0] = 1, [1] = 2, [6] = 7};
    for (int i = 0; i < 7; i++)
    {
        //   printf("Days %d \n", days[i]);
    }

    int mulArr[2][2] = {{1, 2}, {3, 4}};
    for (int i = 0; i < 2; i++)
    {
        printf("I %d \n", mulArr[i][0]);
        for (int j = 0; j < 2; j++)
        {
            printf("MulArr %d \n", mulArr[i][j]);
        }
    }
    return 0;
}
