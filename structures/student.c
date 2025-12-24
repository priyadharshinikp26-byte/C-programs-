#include <stdio.h>
struct student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct student s;

    printf("Enter roll number, name and marks:\n");
    scanf("%d %s %f", &s.roll, s.name, &s.marks);

    printf("Student Details:\n");
    printf("Roll: %d\nName: %s\nMarks: %.2f",
           s.roll, s.name, s.marks);

    return 0;
}
