#include <stdio.h>

int main() {
    int arr[100], n, value, pos;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input elements of the sorted array
    printf("Enter %d elements in ascending order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the value to be inserted
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Find the position to insert the value
    pos = n;
    for (int i = 0; i < n; i++) {
        if (arr[i] > value) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right to create space
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the value
    arr[pos] = value;

    // Update the size of the array
    n++;

    // Print the updated array
    printf("Array after inserting %d:\n", value);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
