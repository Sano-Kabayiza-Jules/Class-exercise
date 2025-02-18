#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 10
#define SUBJECTS 3

// Structure to store student information
struct Student {
    char name[50];
    float marks[SUBJECTS];
    char grade;
};

// Function to calculate grade based on average marks
char calculateGrade(float average) {
    if (average >= 90) return 'A';
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (average >= 60) return 'D';
    else return 'F';
}

int main() {
    struct Student students[NUM_STUDENTS];
    int i, j;

    // Input student data
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);

        for (j = 0; j < SUBJECTS; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }

        // Calculate average and grade
        float sum = 0;
        for (j = 0; j < SUBJECTS; j++) {
            sum += students[i].marks[j];
        }
        float average = sum / SUBJECTS;
        students[i].grade = calculateGrade(average);
    }

    // Display the database
    printf("\nStudent Database:\n");
    printf("-------------------------------------------------\n");
    printf("Name\t\tSubject1\tSubject2\tSubject3\tGrade\n");
    printf("-------------------------------------------------\n");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("%s\t\t%.2f\t\t%.2f\t\t%.2f\t\t%c\n", students[i].name, students[i].marks[0], students[i].marks[1], students[i].marks[2], students[i].grade);
    }

    return 0;
}
