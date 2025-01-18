/* To Calculate SI
Aman(241306050)*/
#include <stdio.h>
#include <conio.h>
int main()
{
float p,r,t,SI;
printf("Enter the value of Principal= ");
scanf("%f",&p);
printf("Enter the value of ROI= ");
scanf("%f",&r);
printf("Enter the value of Time(in years)= ");
scanf("%f",&t);
SI=p*r*t/100;

printf("The calculated Simple interest is = %f",SI);


return -1;
}
