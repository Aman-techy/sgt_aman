#include <stdio.h>
int main(){
	int rows,i,j;
	printf("number of rows = ");
	scanf("%d",&rows);
/*i is for the number of rows i=1 to i=rows*/	
	for(i=1;i<=rows;i++)

	{
	/* j is to print the pattern if i=1
	then j will print numbers from 5 to1*/	
		for(j=5;j>=i;j--)
		{  printf("%d",j);	
		} printf("\n");
	}
	return 0;
}
