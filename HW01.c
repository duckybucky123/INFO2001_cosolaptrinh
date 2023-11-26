//#include <stdio.h>
//
//struct Student {
//    char name[50];
//    int id;
//    float score;
//};
//
//void inputStudent(struct Student *s) {
//    printf("Enter name, ID, and score: ");
//    scanf("%s %d %f", s->name, &s->id, &s->score);
//}
//
//void displayStudent(struct Student s) {
//    printf("Name: %s\nID: %d\nScore: %.2f\n", s.name, s.id, s.score);
//}
//
//void updateStudent(struct Student *s) {
//    printf("Update name and score: ");
//    scanf("%s %f", s->name, &s->score);
//}
//
//int main() {
//    struct Student students[100];
//    int n = 0;
//
//    int choice;
//    do {
//        printf("\nMenu:\n1. Add student\n2. Display students\n3. Update student\n0. Exit\n");
//        printf("Enter your choice: ");
//        scanf("%d", &choice);
//
//        switch (choice) {
//            case 1:
//                inputStudent(&students[n++]);
//                break;
//            case 2:
//                for (int i = 0; i < n; i++)
//                    displayStudent(students[i]);
//                break;
//            case 3:
//                printf("Enter student ID to update: ");
//                int updateId;
//                scanf("%d", &updateId);
//                for (int i = 0; i < n; i++) {
//                    if (students[i].id == updateId) {
//                        updateStudent(&students[i]);
//                        printf("Student updated successfully.\n");
//                        break;
//                    }
//                }
//                break;
//            case 0:
//                printf("Exiting program.\n");
//                break;
//            default:
//                printf("Invalid choice. Please try again.\n");
//        }
//    } while (choice != 0);
//
//    return 0;
//}
