/* To Swap 2  No. entered by user
Aman(241306050)*/
#include <stdio.h>
#include <conio.h>
int main()
{
int a,b,temp;
clrscr();
printf("Enter the value of a= ");
scanf("%d",&a);
printf("Enter the value of b= ");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("now the value of a is = %d",a);
printf("\nand the value of b is = %d",b);
getch();
return -1;
}