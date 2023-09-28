#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */

    int age = 18;

    switch (age)
    {
    case 17:
        printf("Expected age equal 17 years old");
        break;
    case 16:
        printf("Expected age equal 16 years old");
        break;
    case 15:
        printf("Expected age equal 15 years old");
        break;
    case 14:
        printf("Expected age equal 14 years old");
        break;
    case 18:
        printf("Expected age equal 18 years old");
        break;
    default:
        printf("Age not expected");
        break;
    }

    return 0;
}
