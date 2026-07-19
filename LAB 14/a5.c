#include <stdio.h>

void main() {
    int height[5], weight[5], count = 0;
     for(int i = 0; i < 5; i++) {
        printf("Enter height (in cm) and weight (in kg) of person %d: ", i + 1);
        scanf("%d %d", &height[i], &weight[i]);
    }
     for(int i = 0; i < 5; i++) {
        if(height[i] > 170 && weight[i] < 50) {
            count++;
        }
    }
    printf("Number of people with height > 170 cm and weight < 50 kg: %d\n", count);
}
