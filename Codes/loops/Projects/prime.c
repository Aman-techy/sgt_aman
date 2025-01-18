#include <stdio.h>

int main() {
    int num, i, isPrime;

    while (1) {
        printf("Enter a positive integer (or -1 to stop): ");
        scanf("%d", &num);

        if (num == -1) {
            printf("Program terminated.\n");
            break;
        }

        if (num <= 1) {
            printf("%d is not a prime number.\n", num);
            continue;
        }

        isPrime = 1; 
        for (i = 2; i <= num/2; ++i) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }
    }

    return 0;
}

