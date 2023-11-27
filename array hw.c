#include <stdio.h>

#define MAX_STUDENTS 50

float calculateAverage(float marks[], int numStudents) {
    float sum = 0.0;
    for (int i = 0; i < numStudents; i++) {
        sum += marks[i];
    }
    float average = sum / numStudents;
    return average;
}

int main() {
    float marks[MAX_STUDENTS];
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    printf("Enter the marks of %d students:\n", numStudents);
    for (int i = 0; i < numStudents; i++) {
        printf("Mark of student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    float average = calculateAverage(marks, numStudents);

    printf("Average mark: %.2f\n", average);

    return 0;
}