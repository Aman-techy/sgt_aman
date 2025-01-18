#include <stdio.h>

int main() {
    int num, i;
    long long int factorial;

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
            factorial = 1;
            for (i = 1; i <= num; ++i) {
                factorial *= i;
            }
            printf("Factorial of %d = %lld\n", num, factorial);
        }
    }

    return 0;
}

