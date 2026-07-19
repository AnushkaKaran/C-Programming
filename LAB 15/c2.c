#include <stdio.h>

void main() {
    int n, i, newValue, pos;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n + 1]; 
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the new value to insert: ");
    scanf("%d", &newValue);
    for(i = 0; i < n; i++) {
        if(arr[i] > newValue) {
            pos = i;
            break;
        }
    }
    if(i == n) {
        pos = n; // New value is the largest
    }
    // Shift elements to the right
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    // Insert the new value
    arr[pos] = newValue;
    // Print the array after insertion
    printf("Array after inserting the new value:\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
