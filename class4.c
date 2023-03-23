#include <stdio.h>

// function to perform binary search
int binarySearch(int arr[], int low, int high, int x)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// main function
int main()
{
    int arr[] = { 2, 4, 7, 10, 12, 15, 18 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10; // element to be searched
    
    int index = binarySearch(arr, 0, n - 1, x);
    
    if (index == -1)
        printf("Element not found");
    else
        printf("Element found at position %d", index + 1);
    
    return 0;
}
output
element found at 4 