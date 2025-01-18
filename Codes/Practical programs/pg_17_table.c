#include<stdio.h>
int main(){
int i,j,l;
printf("enter no. till you want to print=");
scanf("%d",&l);
printf("tables from 1 to %d\n",l);
for(j=1;j<=10;j++){
for(i=1;i<=l;i++)
{
printf("%d\t",j*i);
}
printf("\n");
}
return 0;
}
