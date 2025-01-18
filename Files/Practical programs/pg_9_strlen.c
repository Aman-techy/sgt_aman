#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len;

    printf("Enter a sentence: ");

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    len = strlen(str);
    printf("The Length of Your Sentence is %d\n", len);
    return 0;
}

