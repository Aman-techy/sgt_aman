#include <stdio.h>

long long int factorial(int num) {
    long long int fact = 1;
    int i;
    for (i = 1; i <= num; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;

    while (1) {
        printf("Enter an integer (or -1 to stop): ");
        if (scanf("%d", &num) != 1) {
            printf("Invalid input. Please enter a valid integer.\n");
            while (getchar() != '\n');
            continue;
        }

        if (num == -1) {
            printf("Program terminated.\n");
            break;
        }
        if (num < 0) {
            printf("Factorial is not defined for negative numbers.\n");
        } else if (num > 20) {
            printf("Number too large! Factorial exceeds the limit of long long int.\n");
        } else {
            printf("Factorial of %d = %lld\n", num, factorial(num));
        }
    }
    return 0;
}


