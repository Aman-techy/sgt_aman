#include <stdio.h>
#include <string.h>
int main() {
char str1[100], str2[100], str3[100];
int choice, i;
do {
printf("\nMenu:\n");
printf("1. Calculate length of a string\n");
printf("2. Concatenate at the end of a given string\n");
printf("3. Copy one string to another\n");
printf("4. Compare contents of two strings\n");
printf("5. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("Enter a string: ");
scanf("%s", str1);
for (i = 0; str1[i] != '\0'; i++);
printf("Length of the string: %d\n", i);
break;
case 2:
printf("Enter the first string: ");
scanf("%s", str1);
printf("Enter the second string to concatenate: ");
scanf("%s", str2);
for (i = 0; str1[i] != '\0'; i++);
int j;
for (j = 0; str2[j] != '\0'; j++, i++) {

str1[i] = str2[j];
}
str1[i] = '\0';
printf("Concatenated string: %s\n", str1);
break;
case 3:
printf("Enter a string to copy: ");
scanf("%s", str1);
for (i = 0; str1[i] != '\0'; i++) {
str2[i] = str1[i];
}
str2[i] = '\0';
printf("Copied string: %s\n", str2);
break;
case 4:
printf("Enter the first string: ");
scanf("%s", str1);
printf("Enter the second string: ");
scanf("%s", str2);
for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
if (str1[i] != str2[i]) {
break;
}
}
if (str1[i] == '\0' && str2[i] == '\0') {
printf("Strings are equal\n");
} else {
printf("Strings are not equal\n");
}
break;
case 5:
printf("Exiting program.\n");
break;
default:
printf("Invalid choice. Try again.\n");
}
} while (choice != 5);
return 0;}
