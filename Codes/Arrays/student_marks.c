#include <stdio.h>
int main(){
int i,sum=0,avg;
int array[50];

for(i=0;i<50;i++){
	printf("Enter the marks of student %d ",i+1);
	scanf("%d",&array[i]);
}
for(i=0;i<50;i++){
	sum+=array[i];
	avg = sum/50;
}

printf("\nsum of total 50 students maths marks is :- %d\n",sum);
printf("avg marks are:- %d ",avg);
return 0;
}

