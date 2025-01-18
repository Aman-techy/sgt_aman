#include <stdio.h>

int main() {
    int i, j;
    printf("Multiplication tables from 1 to 10:\n");
    
    scanf("%d", &num);
    
    for (i = 1; i <= 10; ++i) {
        for (j = 1; j <= 10; ++j) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}

