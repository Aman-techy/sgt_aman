int factorial(int num);
#include<stdio.h>
int main()
{
int n, num;
printf("enter a positive number = ");
scanf("%d",&n);
if(num<0){
printf("factorial of negative nums are not defined ");
}
else{
printf("the factorial of %d is %d",n,factorial(n));
}
return 0;
}
int factorial(int num) {
if(num == 0||num == 1){
return 1;}
else{
return num*factorial(num-1);
}}
