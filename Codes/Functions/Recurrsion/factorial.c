//WAP to enter a no. from user find out its factorial using recursion
#include<stdio.h>
int factorial(int num);
int main() {
    int n;
    printf("Enter a number to get its factorial ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Factorial of negative numbers is not defined.\n");
    } else {
        printf("The factorial of %d is: %d\n", n, factorial(n));
    }
    return 0;
}

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num-1);
    }
}
