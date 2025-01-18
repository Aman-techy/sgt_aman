#include <stdio.h>
int main()
{
	int i,j,k,rows;
	printf("enter the rows = ");
	scanf("%d",&rows);
	/* i is for the number of rows i=1 to i=rows*/
	for(i=1;i<=rows;i++){

	  /* j is to maintain the space from the left side 
	so that it starts printing from the middle*/

     	              for(j=rows;j>=i;j--){
     		printf(" ");
		 }/*k is to print the value inti piramid form it'll work as 
		 if i =2, k<=2*2-1 i.e. k<=3 so it'll print three "*" in second row*/
		for(k=1;k<=2*i-1;k++){
			printf("*");
		} 
		printf("\n");
	}	
	return 0;
}
