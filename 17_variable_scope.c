#include <stdio.h>

int x = 10; // global variable

int sum(int a, int b)
{
    int x = 20;         // local variable
    int result = a + x; // local variable
    return result;
}

int main(int argc, char const *argv[])
{
    int localVariableName = 5; // local variable

    printf("Global variable: %d\n", sum(5, 5));
    /* code */
    return 0;
}
