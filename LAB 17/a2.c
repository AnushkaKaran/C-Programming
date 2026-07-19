#include <stdio.h>

void main() {
    int intVar = 10;
    float floatVar = 3.14;
    double doubleVar = 3.141592653589793;
    char charVar = 'A';

    int *intPtr = &intVar;
    float *floatPtr = &floatVar;
    double *doublePtr = &doubleVar;
    char *charPtr = &charVar;

    
    printf("intVar value: %d, address: %p\n", *intPtr,intPtr);
    printf("floatVar value: %.2f, address: %p\n", *floatPtr,floatPtr);
    printf("doubleVar value: %.15f, address: %p\n", *doublePtr,doublePtr);
    printf("charVar value: %c, address: %p\n", *charPtr,charPtr);
}
