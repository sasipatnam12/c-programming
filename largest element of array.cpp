#include <stdio.h>

int findLargest(int arr[], int n);

int main() {
    int arr[] = {2, 7, 1, 9, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int largest = findLargest(arr, n);
    printf("The largest element in the array is %d\n", largest);

    return 0;
}

int findLargest(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}