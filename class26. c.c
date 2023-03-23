#include <stdio.h>

int main() {
    char operator;
    float n1, n2, result;

    printf("Enter operator (+, -, *, /, %): ");
    scanf("%c", &operator);

    printf("Enter operands: ");
    scanf("%f %f", &n1, &n2);

    switch (operator) {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            result = n1 / n2;
            break;
        case '%':
            result = (int)n1 % (int)n2;  // typecast to int to perform modulus operation
            break;
        default:
            printf("Invalid operator");
            return 1;  // exit program with error status
    }

    printf("%.2f %c %.2f = %.2f", n1, operator, n2, result);

    return 0;
}
