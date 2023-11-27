//// ghép phần mảng và tuyến tính
//#include <stdio.h>
//void bubbleSort(int arr[], int n) {
//    int i, j;
//    for (i = 0; i < n-1; i++) {
//        for (j = 0; j < n-i-1; j++) {
//            if (arr[j] > arr[j+1]) {
//                int temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//            }
//        }
//    }
//}
//
//void selectionSort(int arr[], int n) {
//    int i, j, min_idx;
//    for (i = 0; i < n-1; i++) {
//        min_idx = i;
//        for (j = i+1; j < n; j++) {
//            if (arr[j] < arr[min_idx]) {
//                min_idx = j;
//            }
//        }
//        int temp = arr[min_idx];
//        arr[min_idx] = arr[i];
//        arr[i] = temp;
//    }
//}
//
//int linearSearch(int arr[], int n, int x) {
//    for (int i = 0; i < n; i++) {
//        if (arr[i] == x) {
//            return i;
//        }
//    }
//    return -1;
//}
//
//void combinedSort(int arr[], int n) {
//    // Sử dụng Bubble Sort cho các phần tử đầu tiên
//    bubbleSort(arr, n);
//
//    // Sử dụng Selection Sort cho các phần tử còn lại
//    selectionSort(arr, n);
//}
//
//int main() {
//    int arr[] = {64, 34, 25, 12, 22, 11, 90};
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    combinedSort(arr, n);
//
//    printf("Sorted array: \n");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    int x = 12;
//    int result = linearSearch(arr, n, x);
//
//    if (result == -1) {
//        printf("Element not found in array\n");
//    } else {
//        printf("Element found at index %d\n", result);
//    }
//
//    return 0;
//}