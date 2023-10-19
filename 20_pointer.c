#include <stdio.h>

void multipleByTwo(int *num)
{
    *num = *num * 2;
    printf("Value of num in multipleByTwo %d \n", *num);
}

int main(int argc, char const *argv[])
{
    /* code */
    int a = 20;
    // printf("a = %d\n", a);
    // printf("address of variable a %p \n", &a);

    int *p = &a;

    // printf("address of variable p %p \n", p);
    // printf("Value of pointer p %d \n", *p);

    // constant pointer
    const int b = 30;
    const int *ptr = &b;
    // printf("Value of pointer ptr %d \n", *ptr);

    // pointer to a function
    int num = 9;
    int *ptrNum = &num;
    multipleByTwo(ptrNum);

    // pointer to an array
    int cards[] = {1, 2, 3, 4, 5};
    int *ptrCards = cards;

    int *ptrCards2 = &cards[3];
    printf("PtrCards2 %d \n", *ptrCards2);

    if (ptrCards != NULL)
    {
        printf("PtrCards %d \n", *ptrCards);
        printf("PtrCards %d \n", ptrCards[1]);
    }
    // check null pointer
    int *pr = NULL;
    if (pr == NULL)
    {
        printf("Pointer is NULL \n");
    }
    else
    {
        printf("Pointer is not NULL \n");
    }
    return 0;
}
