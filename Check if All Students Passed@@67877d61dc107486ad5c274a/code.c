#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
    int N;
    int allPassed = 1; // Flag to check if all students passed
    
    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &N);
    
    // Create an array of Student structures
    struct Student students[N];
    
    // Input data for each student
    for (int i = 0; i < N; i++) {
        printf("Enter roll number, name, and marks for student %d: ", i + 1);
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
        
        // Check if marks are below the passing threshold
        if (students[i].marks < 50) {
            allPassed = 0; // If any student fails, set flag to 0
        }
    }

    // Output result
    if (allPassed) {
        printf("All Passed\n");
    } else {
        printf("Not All Passed\n");
    }

    return 0;
}