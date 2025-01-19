#include <stdio.h>

int main() {
    int arr[100], n, value, i;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input elements of the sorted array
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the value to be inserted
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Find position and shift elements
    for (i = n - 1; i >= 0 && arr[i] > value; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the value
    arr[i + 1] = value;
    n++;

    // Print the updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
