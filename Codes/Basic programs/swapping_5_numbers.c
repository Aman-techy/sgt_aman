/* swapping enterred 5 no(S)
Aman(241306050)*/
#include <stdio.h>

int main() {
int a, b, c, d, e, temp1, temp2;

printf("Enter the value of a= ");
scanf("%d", &a);
printf("Enter the value of b= ");
scanf("%d", &b);
printf("Enter the value of c= ");
scanf("%d", &c);
printf("Enter the value of d= ");
scanf("%d", &d);
printf("Enter the value of e= ");
scanf("%d", &e);

    
temp1 = a; 
temp2 = b; 
a = e;    
b = d;  
d = temp2;
e = temp1;

    
printf("now the value of a is = %d", a);
printf("\nand the value of b is = %d", b);
printf("\nand the value of c is = %d", c);
printf("\nand the value of d is = %d", d);
printf("\nand the value of e is = %d", e);

return 0;
}

