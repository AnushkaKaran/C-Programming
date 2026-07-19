#include <stdio.h>

void main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int sourceArray[n], destinationArray[n];
    printf("Enter %d elements for the source array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &sourceArray[i]);
    }
    for(i = 0; i < n; i++) {
        destinationArray[i] = sourceArray[i];
    }
    printf("Elements of the destination array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", destinationArray[i]);
    }
    printf("\n");
}
