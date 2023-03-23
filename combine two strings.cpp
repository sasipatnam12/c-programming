#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50], combined_str[100];

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    // Copy the first string into the combined string
    strcpy(combined_str, str1);

    // Concatenate the second string onto the end of the combined string
    strcat(combined_str, str2);

    printf("The combined string is: %s\n", combined_str);

    return 0;
}