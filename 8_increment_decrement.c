#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */

    int a = 1;
    int b = 0;

    //  b = a++;
    b = ++a;
    printf("a =%d \n", a);

    printf("b =%d \n", b);

    return 0;
}
