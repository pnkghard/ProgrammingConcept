/*
Assignment - Lab 6
    Implement to find an item in a list through binary search. 
*/


#include<stdio.h>

int binarySearch(int arr[], int el, int start, int end) {
    int mid = start + (end-start)/2;
    if(end<start) {
        return 1;
    }
    if(el<arr[mid]) {
        end = mid;
    } else if(el>arr[mid]) {
        start = mid;
    } else if(el==arr[mid]) {
        return mid;
    }
    binarySearch(arr, el, start, end);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int b = binarySearch(arr, 4, 0, 5);
    if(b==1) {
        printf("element not found in list\n");
    } else {
        printf("element found in %d position..", b+1);
    }    
}