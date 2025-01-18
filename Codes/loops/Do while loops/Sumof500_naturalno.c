#include <stdio.h>

void main() {
    int sum = 0, i = 1;
    do {
        sum += i;
        i++;
    } while (i <= 500);
    printf("Sum of the first 500 natural numbers: %d\n", sum);
}
