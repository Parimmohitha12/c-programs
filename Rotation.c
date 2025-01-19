#include <stdio.h>

int main() {
    int arr[100], n, d, i, j, temp;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number of positions to rotate
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &d);

    // Adjust rotation if d is greater than n
    d = d % n;

    // Rotate the array by N positions
    for (i = 0; i < d; i++) {
        temp = arr[0];
        for (j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }

    // Print the rotated array
    printf("Array after rotating by %d positions:\n", d);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
