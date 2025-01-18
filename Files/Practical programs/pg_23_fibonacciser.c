int fibseries(int num);
#include<stdio.h>
int main(){
int n;
printf("enter the number of elements");
scanf("%d",&n);
printf("fabonacci series ");
printf("%d %d ",0,1);
fibseries(n);
return 0;
}
int fibseries(int n){
static int n1=0,n2=1,n3;
if(n>0){
n3=n1+n2;
n1=n2;
n2=n3;
printf("%d ",n3);
fibseries(n-1);
}
return 0;
}