#include <stdio.h> 

int main()
{
    float p,r,t,SI;
    printf("value of p= ");
    scanf("%f",&p);
     printf("value of r= ");
    scanf("%f",&r);
     printf("value of t= ");
    scanf("%f",&t);
    
    SI= (p*r*t)/100;
    printf("simple interest=%.2f",SI);
    
    return 0; 
}
