//12)Write a C program that defines a structure to store a student's details (name, roll number, and marks). Use an array of structures to store details of 3 students and print them. 
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[3];
    int i;
    for(i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);  
        printf("Roll number: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Details:\n");
    printf("Name\t\tRoll No\tMarks\n");
    printf("------------------------------\n");
    for(i = 0; i < 3; i++) {
        printf("%s\t\t%d\t%.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}

