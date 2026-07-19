#include <stdio.h>
// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)  return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
} 
// Function to find all prime numbers in a given range
void findPrimesInRange(int start, int end){
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
void main() {
    int start, end;

    // Prompt the user to enter the range
    printf("Enter the start of the interval: ");
    scanf("%d", &start);
    printf("Enter the end of the interval: ");
    scanf("%d", &end);

    // Find and print all prime numbers in the given range
    findPrimesInRange(start, end);
}
