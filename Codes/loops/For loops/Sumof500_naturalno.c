#include <stdio.h>

void main() {
	int i;
    int sum = 0;
    for (i = 1; i <= 500; i++) {
        sum += i;
    }
    printf("Sum of the first 500 natural numbers: %d\n", sum);
}
