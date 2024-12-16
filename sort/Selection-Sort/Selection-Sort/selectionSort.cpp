#include <iostream>
using namespace std;

void printArray(int arr[], int n, const string& message) {
    cout << message;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        // Find the minimum element in unsorted array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Place the minimum element at the end of sorted portion
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n, "Original array: ");
    selectionSort(arr, n);
    printArray(arr, n, "Sorted array: ");

    getchar();
    return 0;
} 