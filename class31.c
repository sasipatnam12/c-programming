#include <stdio.h>

int main() {
    int n, reversed_num = 0, remainder;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    for (; n != 0; n /= 10) {
        remainder = n % 10;
        reversed_num = reversed_num * 10 + remainder;
    }
    
    printf("The reversed number is: %d", reversed_num);
    
    return 0;
}
output 67605014