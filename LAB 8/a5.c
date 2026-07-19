#include <stdio.h>

void main() {
    int num, i = 0, oddCount = 0, evenCount = 0;

    while (i < 10) {
        
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        i++;
    }

    printf("Count of even numbers: %d\n", evenCount);
    printf("Count of odd numbers: %d\n", oddCount);
}
