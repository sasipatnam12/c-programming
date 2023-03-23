#include <stdio.h>

void selectionSort(int *arr, int size);

int main() {
    int arr[] = {5, 3, 1, 4, 2}; // the array to be sorted
    int size = sizeof(arr) / sizeof(arr[0]); // the size of the array

    printf("Before sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSort(arr, size); // sort the array

    printf("After sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void selectionSort(int *arr, int size) {
    int i, j, min_idx, temp;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < size - 1; i++) {
 // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < size; j++) {
            if (*(arr + j) < *(arr + min_idx)) {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element
        temp = *(arr + i);
        *(arr + i) = *(arr + min_idx);
        *(arr + min_idx) = temp;
    }
}