#include <stdio.h>

int main()
{
    char source[100], destination[100];
    int i;

    printf("Enter a string: ");
    gets(source);

    for (i = 0; source[i] != '\0'; i++)
        destination[i] = source[i];

    destination[i] = '\0';

    printf("\nSource string: %s", source);
    printf("\nDestination string: %s", destination);

    return 0;
}