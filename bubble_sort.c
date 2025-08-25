#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int arr[], int size) {
    // Outer loop for passes
    for (int step = 0; step < size - 1; ++step) {
        // Inner loop for comparisons and swaps within each pass
        for (int i = 0; i < size - step - 1; ++i) {
            // Compare adjacent elements
            if (arr[i] > arr[i + 1]) {
                // Swap if elements are in the wrong order
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    printf("Original array: \n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, size); // Call the bubble sort function

    printf("Sorted array in ascending order: \n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
