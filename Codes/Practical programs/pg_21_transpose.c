#include<stdio.h> 
 
int main() { 
    int i,j; 
    int matrix[2][2],transpose[2][2]; 
 
    printf("Enter elements of the 2x2 matrix:\n");     for(i=0;i<2;i++) {         for(j=0;j<2;j++) { 
            printf("Enter element at [%d][%d]: ",i+1,j+1);             scanf("%d",&matrix[i][j]); 
        } 
    } 
 
    for(i=0;i<2;i++) {         for(j=0;j<2;j++) { 
            transpose[j][i]=matrix[i][j]; 
        } 
    } 
 
    printf("\nThe transpose of the matrix is:\n");     for(i=0;i<2;i++) {         for(j=0;j<2;j++) { 
            printf("%d ",transpose[i][j]); 
        } 
        printf("\n"); 
    } 
 
    return 0; } 
