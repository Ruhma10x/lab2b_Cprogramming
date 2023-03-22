

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    char id[10];
    int age;
} student;

int main() {
    student s;
    
    // store the student's information
    printf("Enter student name: ");
    scanf("%s", s.name);
    
    printf("Enter student ID: ");
    scanf("%s", s.id);
    
    printf("Enter student age: ");
    scanf("%d", &s.age);
    
    // print the student's information
    printf("Name: %s\n", s.name);
    printf("ID: %s\n", s.id);
    printf("Age: %d\n", s.age);
    
    return 0;
}



