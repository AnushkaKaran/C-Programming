#include <stdio.h>

int removeElement(int nums[], int n, int val) {
    int k = 0; 
    for (int i = 0; i < n; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k; // Number of elements not equal to val
}

void main() {
    int n, val;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n]; 
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Prompt the user to enter the value to remove
    printf("Enter the value to remove: ");
    scanf("%d", &val);

    // Remove the elements and get the new array length
    int k = removeElement(nums, n, val);

    // Print the array after removing elements and the new length
    printf("The array after removing the value %d is:\n", val);
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }
    printf("\nNumber of elements not equal to %d: %d\n", val, k);
}
