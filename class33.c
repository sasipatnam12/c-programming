#include <stdio.h>
#include <stdlib.h>

// function to swap two elements
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// function to partition the array using the last element as pivot
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

// function to find the kth smallest element in the array
int kthSmallest(int arr[], int low, int high, int k)
{
    if (k > 0 && k <= high - low + 1)
    {
        int pivotIndex = partition(arr, low, high);
        
        if (pivotIndex - low == k - 1)
            return arr[pivotIndex];
        else if (pivotIndex - low > k - 1)
            return kthSmallest(arr, low, pivotIndex - 1, k);
        else
            return kthSmallest(arr, pivotIndex + 1, high, k - pivotIndex + low - 1);
    }
    return -1;
}

// main function
int main()
{
    int arr[] = { 12, 3, 5, 7, 4, 19, 26 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // find the 3rd smallest element
    
    int kthSmallestElement = kthSmallest(arr, 0, n - 1, k);
    
    printf("%dth smallest element is %d", k, kthSmallestElement);
    return 0;
}