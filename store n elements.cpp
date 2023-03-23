#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements you want to store: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d integers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;

    printf("The elements you entered are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    return 0;
}