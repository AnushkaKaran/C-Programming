#include <stdio.h>

void main() {
    int n;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int sourceArray[n], destinationArray[n];

    // Read elements into the source array
    printf("Enter %d elements for the source array:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &sourceArray[i]);
    }

    int *srcPtr = sourceArray; // Pointer to source array
    int *destPtr = destinationArray; // Pointer to destination array

    // Copy elements from source to destination using pointers
    for(int i = 0; i < n; i++) {
        *(destPtr + i) = *(srcPtr + i);
    }

    // Print the elements of the destination array
    printf("Elements of the destination array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", destinationArray[i]);
    }
    printf("\n");
}
