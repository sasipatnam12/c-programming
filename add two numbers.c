#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    ptr1 = &num1; // pointer to first number
    ptr2 = &num2; // pointer to second number
    
    sum = *ptr1 + *ptr2; // add the values pointed to by the pointers
    
    printf("The sum of %d and %d is %d", *ptr1, *ptr2, sum);
    
    return 0;
}