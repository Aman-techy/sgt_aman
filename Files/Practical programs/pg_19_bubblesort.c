#include <stdio.h>
int main() {
int n;
printf("Enter the number of elements ");
scanf("%d", &n);
int arr[n];
int r;
printf("Enter the elements of the array ");
for (r=0;r<n;r++)
{
scanf("%d", &arr[r]);
}
int i, j;
for (i=0;i<n;i++)
{
for (j=0;j<n-i-1;j++)
{
if (arr[j] > arr[j+1])
{
int temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
}
}
}
printf("Sorted array is ");
for (i=0;i<n;i++)
{
printf("%d ", arr[i]);
}
return 0;
}
