//Write a program Fibonacci series using recurtion 
int fseries(int n);
#include<stdio.h>    
int main(){    
    int n;    
    printf("Enter the number of elements: ");    
    scanf("%d",&n);
printf("Fibonacci Series: ");    
printf("%d %d ",0,1);
fseries(n);
return 0;
}
int fseries(int n){
	static int n1=0,n2=1,n3;
	if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         printf("%d ",n3);    
         fseries(n-1);  
		  
     }
	 return 0; 	
}  
