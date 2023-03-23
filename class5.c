#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    while (i <= n)
    {
        sum += i;
        i++;
    }
    
    printf("Sum of first %d natural numbers is %d", n, sum);
    
    return 0;
}

Enter a positive integer: 5
The sum of natural numbers from 1 to 5 is 15