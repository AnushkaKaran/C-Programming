#include <stdio.h>

void swapArrays(int *arr1, int *arr2, int n) {
    int temp;

    for (int i = 0; i < n; i++) {
        temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}

void main() {
    int n;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    // Read elements into the first array
    printf("Enter %d elements for the first array:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Read elements into the second array
    printf("Enter %d elements for the second array:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Swap the arrays
    swapArrays(arr1, arr2, n);

    // Print the swapped arrays
    printf("First array after swapping:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Second array after swapping:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
}


