
#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */

    int age = 18;

    if (age > 18)
    {
        printf("Age %d under 18", age);
    }
    else if (age >= 18)
    {
        printf("Age %d is greater than or equal 18 \n", age);
    }
    else
    {
        printf("Age %d ", age);
    }

    age <= 18 ? printf("Above 18") : printf("Under 18");

    return 0;
}
