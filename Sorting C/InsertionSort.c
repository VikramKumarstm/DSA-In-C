#include <stdio.h>

void insertionSort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int j=i;

        while(j>0 && arr[j] < arr[j-1]) {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;

            j--;
        }
    }
}

int main() {
    int arr[] = {9, 6, 0, 8, 9, 7, 8, 9, 0, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    // function calling

    insertionSort(arr, n);

    printf("Sorted array is :");
    for(int i = 0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}