#include <stdio.h>

int main() {
    int arr[100], n, pos;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position of the element to delete
    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // Check if the position is valid
    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Delete the element by shifting elements
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Reduce the size of the array
    n--;

    // Print the updated array
    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
