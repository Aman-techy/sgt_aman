#include <stdio.h>

int main() {
    double result = 0;
    char operation;
    double number;
    int running = 1;

    while (running) {
        printf("Current Result: %.2f\n", result);
        printf("Enter operation (+, -, *, /) or 'q' to quit: ");
        scanf(" %c", &operation);

        if (operation == 'q') {
            running = 0;
            continue;
        }

        printf("Enter a number: ");
        scanf("%lf", &number);

        if (operation == '+') {
            result += number;
        } else if (operation == '-') {
            result -= number;
        } else if (operation == '*') {
            result *= number;
        } else if (operation == '/') {
            if (number != 0) {
                result /= number;
            } else {
                printf("Error: Division by zero.\n");
            }
        } else {
            printf("Invalid operation. Please try again.\n");
        }
    }

    printf("Final Result: %.2f\n", result);
    return 0;
}
