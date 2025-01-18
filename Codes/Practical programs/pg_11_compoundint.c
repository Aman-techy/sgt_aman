#include <stdio.h> 
#include <math.h>
int main()
{
    float p,r,t,CI;
    printf("value of p= ");
    scanf("%f",&p);
     printf("value of r= ");
    scanf("%f",&r);
     printf("value of t= ");
    scanf("%f",&t);
    
    CI=p*pow(1+r/100,t);
    printf("compound interest=%.2f",CI);
    
    return 0;
}
