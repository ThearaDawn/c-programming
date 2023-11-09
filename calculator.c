#include <stdio.h>
#include <stdlib.h>

double calculator(double num1, double num2, char operator) {

    switch (operator) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            return num1 / num2;
        default:
            printf("Invalid input");
            exit(0);
    }
}

int main() {

    //printf("%lf", calculator(2, 2, '+'));

    double num1, num2;
    char op;

    printf("Please choose operator: (+, -, *, /) ");
    scanf("%c", &op);
    printf("Input number 1: ");
    scanf("%lf", &num1);
    printf("Input number 2: ");
    scanf("%lf", &num2);

    double result = calculator(num1, num2, op);
    printf("Result: %lf", result);
    return 0;
}