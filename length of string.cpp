#include <stdio.h>

int main() {
    char str[100];
    char *p;
    int len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    p = str;

    while (*p != '\0') {
        len++;
        p++;
    }

    printf("Length of the string: %d\n", len);

    return 0;
}