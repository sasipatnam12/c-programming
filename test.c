#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int sum, diff, prod;
    int *ptr_a = &a;
    int *ptr_b = &b;

    sum = *ptr_a + *ptr_b;
    diff = *ptr_a - *ptr_b;
    prod = (*ptr_a) * (*ptr_b);

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", prod);

    return 0;
}
