#include <stdio.h>
int main()
{
int A[2][2],B[2][2],C[2][2],i,j,k;
printf("Enter the elements of the first matrix\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++){
printf("Enter element [%d][%d] ",i+1,j+1);
scanf("%d",&A[i][j]);
}}
printf("Enter the elements of the second matrix\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++){
printf("Enter element [%d][%d] ",i+1,j+1);
scanf("%d",&B[i][j]);
}}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++){
C[i][j]=0;
for(k=0;k<2;k++){
C[i][j]+=A[i][k]*B[k][j];
}}}
printf("Multiplication of the matrix \n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++){
printf("%d\t",C[i][j]);
}
printf("\n");
}
return 0;}
