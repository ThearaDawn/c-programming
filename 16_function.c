
#include <stdio.h>

void printHelloWorld()
{
    printf("Hello World\n");
}

int sum(int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    /* code */
    printHelloWorld();
    int total = sum(7, 7);
    total = total + 2;
    printf("Total: %d\n", total);
    return 0;
}
