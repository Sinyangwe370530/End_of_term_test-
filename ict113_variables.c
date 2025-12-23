#include <stdio.h>

int main() {
    //Variable Declaration
    char name[50];
    int age;
    float gpa;

    //Input Section
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    //Display the output
    printf("\nName: %s", name);
    printf("Age: %d\n", age);
    printf("GPA: %.1f\n", gpa);

    return 0;
}

