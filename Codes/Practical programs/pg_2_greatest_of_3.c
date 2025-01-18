#include <stdio.h>
int main() {

 int a, b, c;
printf("Enter the value of a: ");
scanf("%d", &a);
printf("Enter the value of b: ");
scanf("%d", &b);
printf("Enter the value of c: ");
scanf("%d", &c);
if (a >= b && a >= c) {
printf("The greatest number is: %d\n", a);
  } 

else if (b >= a && b >= c) {
printf("The greatest number is: %d\n", b);
} else {
printf("The greatest number is: %d\n", c);
    }
  return 0;
}
