#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            return mid; // Element found, return its index
        } else {
            if (key > arr[mid]) {
                start = mid + 1; // Move to the right half
            } else {
                end = mid - 1; // Move to the left half
            }
        }
    }

    return -1; // Element not found
}

int main() {
    int n;
    printf("Program for Binary search.\n");
    printf("Enter size for array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter sorted array elements:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the element you want to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, n, key);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
