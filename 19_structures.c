
#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[50];
    float fees;
} student1, student2;

int main(int argc, char const *argv[])
{
    /* code */

    struct student record[3];

    // student 1
    record[0].id = 1;
    strcpy(record[0].name, "C Programming");
    record[0].fees = 1000.00;

    // student 2
    record[1].id = 2;
    strcpy(record[1].name, "C++ Programming");
    record[1].fees = 2000.00;

    // student 3
    record[2].id = 3;
    strcpy(record[2].name, "Java Programming");
    record[2].fees = 3000.00;

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("\n");
    //     printf("ID: %d\n", record[i].id);
    //     printf("Name: %s\n", record[i].name);
    //     printf("Fees: %f\n", record[i].fees);
    // }

    student1.id = 1;
    student1.fees = 1000.00;
    strcpy(student1.name, "Student");

    printf("ID: %d\n", student1.id);
    printf("Name: %s\n", student1.name);
    printf("Fees: %f\n", student1.fees);

    student2.id = 2;
    student2.fees = 1000.00;
    strcpy(student2.name, "Student 2");

    printf("ID: %d\n", student2.id);
    printf("Name: %s\n", student2.name);
    printf("Fees: %f\n", student2.fees);

    return 0;
}
