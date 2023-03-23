#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n, d, sum;
    clrscr();

    printf("Armstrong numbers: ");
    for (i = 2; i <= 1000; i++)
    {
        sum = 0;
        n = i;
        while (n)
        {
            d = n % 10; // Get the last digit of n
            sum = sum + (d * d * d);
            n = n / 10;
        }
        if (sum == i)
            printf("%d ", i);
    }
    getch();
    return 0;
}
 output
Armstrong numbers: 153 370 371 407
