#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int arr[], int n) {
    for(int i=0; i<n; i++) {
        bool swapped = false;

        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;

                swapped = true;
            }
        }

        if(!swapped) {
            break;
        }
    }
}


int main() {

    int arr[] = {9, 6, 0, 8, 9, 7, 8, 9, 0, 3};

    int n = sizeof(arr)/sizeof(arr[0]);

    // //function calling
    bubbleSort(arr, n);

    printf("Sorted array is :");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}