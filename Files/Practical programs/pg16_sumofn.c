#include <stdio.h>
int main() {
	int i,j;
	printf("Enter number to sumup");
	scanf("%d",&j);
    int sum = 0;
    for (i = 1; i <= j; i++) {
        sum += i;
    }
    printf("Sum of the first %d natural numbers: %d\n",j, sum);
}
