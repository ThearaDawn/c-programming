#include <stdio.h>
#include <string.h>
int main() {

//    Lenght stirng function
    char source[] = "Hello, World!";
    char ab[] = "Apple";
//    printf("Length of apple: %zu\n", strlen(ab));
//    printf("Length of source: %zu\n", strlen(source));


    char str1[] = "ABC";
    char str2[10];

    strcpy(str2, str1);

//    puts(str2);
    printf("%s", str2);

    return 0;
}
