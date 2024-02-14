#include <stdio.h>

int main() {

    int arr[] = {9, 6, 0, 8, 9, 7, 9, 0, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target = 9;

    int idx = -1;
    for(int i=0; i<n; i++) {
        if(arr[i] == target) {
            idx = i;
            break;
        }
    }

    if(idx == -1) {
        printf("target element not found in given array");
    }
    else {
        printf("target element found at %d index", idx);
    }
    return 0;
}