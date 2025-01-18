int swap(int *x, int *y);
#include <stdio.h>
int main(){
int a,b,c,d;
printf(" enter the value a =");
scanf("%d",&a);
printf(" enter the value of b =");
scanf("%d",&b);
swap(&a,&b);
}
int swap(int *x, int *y){
int temp;
temp=x;
x=y;
y=temp;
printf("the address of a=%d and b=%d\n",x,y);
printf("the value of a=%d and b=%d",*x,*y);
return 0;
}