#include <stdio.h>

#define MAX_STUDENTS 100


struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
    int N, i;
    struct Student students[MAX_STUDENTS];
    float total_marks = 0.0;

    
    printf("Enter the number of students: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Enter roll number, name, and marks for student %d: ", i + 1);
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
        total_marks += students[i].marks;  
    }

    
    float average_marks = total_marks / N;
    printf("Average Marks: %.2f\n", average_marks);

    return 0;
}