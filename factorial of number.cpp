#include <stdio.h>

void factorial(int *n);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    factorial(&num);

    printf("Factorial of %d is %d\n", num, *(&num));

    return 0;
}

void factorial(int *n) {
    int i, fact = 1;

    for (i = 1; i <= *n; i++) {
        fact *= i;
    }

    *n = fact;
}