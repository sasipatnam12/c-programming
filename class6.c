#include <stdio.h>

int main()
{
    int num1, num2, gcd;
    
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    
    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    
    printf("GCD of %d and %d is %d", num1, num2, gcd);
    
    return 0;
}
Enter two positive integers: 24 36
GCD of 24 and 36 is 12