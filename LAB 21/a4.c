#include <stdio.h>
struct Student {
    char name[100];
    float percentage;
    int age;
};
void main() {
    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        gets(students[i].name);

        printf("Percentage: ");
        scanf("%f", &students[i].percentage);

        printf("Age: ");
        scanf("%d", &students[i].age);
        getchar(); // To consume the newline character left by scanf

        printf("\n");
       
    }
    for (int i = 0; i < 5; i++) {
        printf("Details of student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Percentage: %.2f\n", students[i].percentage);
        printf("Age: %d\n", students[i].age);
        printf("\n");
    }
}
