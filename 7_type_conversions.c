#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int x = 45;
    double y = 90.99;
    double total = x / y;

    printf("Implicit convertions %f\n", total);



    int a = 23;
    int b = 22;

    printf("explicit type convertions: %f", (double) a / b);
    return 0;
}
