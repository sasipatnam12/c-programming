#include <stdio.h>
#include <ctype.h>

int main()
{
    char string[100];
    int i, alphabets = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    gets(string);

    for (i = 0; string[i] != '\0'; i++)
    {
        if (isalpha(string[i]))
            alphabets++;
        else if (isdigit(string[i]))
            digits++;
        else
            special++;
    }

    printf("\nAlphabets: %d", alphabets);
    printf("\nDigits: %d", digits);
    printf("\nSpecial characters: %d", special);

    return 0;
}