#include <stdio.h>

int calculate(int (*func)(int), int n) {
    return func(n);
}

int square(int x) {
    return x*x;
}

int cube(int x) {
    return x*x*x;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Square of the number is %d\n", calculate(square, num));
    printf("Cube of the number is %d\n", calculate(cube, num));

    return 0;
}
output
Enter a number: 5
Square of the number is 25
Cube of the number is 125
