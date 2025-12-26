#include <stdio.h>

int main() {
    char name[] = "John Sinyangwe";
    int age = 21;
    float gpa = 4.9;

    printf("=================================\n");
    printf("        STUDENT PROFILE\n");
    printf("=================================\n");
    printf("Name : %s\n", name);
    printf("Age  : %d years\n", age);
    printf("GPA  : %.1f \n", gpa);
    printf("=================================\n");
    printf("      Program has ended\n");
    printf("=================================\n");

    return 0;
}

