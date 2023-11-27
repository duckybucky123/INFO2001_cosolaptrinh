#include <stdio.h>
//#include <time.h>
//
//struct Student {
//    char name[50];
//    int id;
//    int age;
//    float grade;
//};
//
//void bubbleSort(struct Student arr[], int n) {
//    // Bubble sort implementation
//    // ...
//}
//
//void selectionSort(struct Student arr[], int n) {
//    // Selection sort implementation
//    // ...
//}
//
//int linearSearch(struct Student arr[], int n, float x) {
//    // Linear search implementation
//    // ...
//}
//
//int binarySearch(struct Student arr[], int l, int r, float x) {
//    // Binary search implementation
//    // ...
//}
//
//int main() {
//    const int MAX_STUDENTS = 50;
//    struct Student students[MAX_STUDENTS];
//
//    // Input student information
//    printf("Nhap thong tin sinh vien:\n");
//    for (int i = 0; i < MAX_STUDENTS; i++) {
//        printf("Nhap ten: ");
//        fgets(students[i].name, sizeof(students[i].name), stdin);
//        printf("Nhap ma so: ");
//        scanf("%d", &students[i].id);
//        printf("Nhap tuoi: ");
//        scanf("%d", &students[i].age);
//        printf("Nhap diem: ");
//        scanf("%f", &students[i].grade);
//        getchar(); // Consume the newline character left in the buffer
//    }
//
//    // Sorting
//    clock_t start_bubble = clock();
//    bubbleSort(students, MAX_STUDENTS);
//    clock_t end_bubble = clock();
//    double time_bubble = ((double) (end_bubble - start_bubble)) / CLOCKS_PER_SEC;
//
//    clock_t start_selection = clock();
//    selectionSort(students, MAX_STUDENTS);
//    clock_t end_selection = clock();
//    double time_selection = ((double) (end_selection - start_selection)) / CLOCKS_PER_SEC;
//
//    // Display sorted array
//    printf("\nSorted Array (Bubble Sort):\n");
//    for (int i = 0; i < MAX_STUDENTS; i++) {
//        // Display student information
//        // ...
//    }
//
//    printf("\nSorted Array (Selection Sort):\n");
//    for (int i = 0; i < MAX_STUDENTS; i++) {
//        // Display student information
//        // ...
//    }
//
//    // Display execution time
//    printf("\nTime taken by Bubble Sort: %lf seconds\n", time_bubble);
//    printf("Time taken by Selection Sort: %lf seconds\n", time_selection);
//
//    // Search
//    float searchValue;
//    printf("\nEnter a grade to search: ");
//    scanf("%f", &searchValue);
//
//    int linearIndex = linearSearch(students, MAX_STUDENTS, searchValue);
//    if (linearIndex != -1) {
//        printf("Linear Search: Student found at index %d\n", linearIndex);
//    } else {
//        printf("Linear Search: Student not found\n");
//    }
//
//    selectionSort(students, MAX_STUDENTS); // Sorting before binary search
//    int binaryIndex = binarySearch(students, 0, MAX_STUDENTS - 1, searchValue);
//    if (binaryIndex != -1) {
//        printf("Binary Search: Student found at index %d\n", binaryIndex);
//    } else {
//        printf("Binary Search: Student not found\n");
//    }
//
//    // Calculate and print the average grade
//    float sum = 0;
//    for (int i = 0; i < MAX_STUDENTS; i++) {
//        sum += students[i].grade;
//    }
//    float average = sum / MAX_STUDENTS;
//
//    printf("\nDiem trung binh cua lop: %.2f\n", average);
//
//    return 0;
//}
int main (){
    int var = 10;
    int *ptr = &var;
    printf("%d", &var);
    return 0;

}