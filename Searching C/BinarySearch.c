#include <stdio.h>

int binarySearch(int arr[], int target, int n) {
    int low =0, high = n;

    while(low < high) {
        int mid = low+(high-low)/2;
        if(arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] < target) {
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}
int main() {

    int arr[] = {5, 8, 10, 23, 47, 78, 97};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 8;

    int result = binarySearch(arr, target, n);

    if(result == -1) {
        printf("Element is not found in an array.");
    }
    else{
        printf("element found at %d index.", result);
    }
    return 0;
}