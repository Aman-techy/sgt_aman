#include <stdio.h>

int main() {
float c, f;
printf("Enter the Celsius degree: ");
scanf("%f", &c);
f = (c * 9.0 / 5.0) + 32.0;
    
printf("The calculated Fahrenheit is: %f\n", f); 
    
return 0; 
}
