/*
Assignment - Lab 6
    Implement sorting algorithm for selection sort, Bubble sort.
*/

#include<stdio.h>

//swapping function
void swap(int *f, int *s) {
    *f = *f ^ *s;
    *s = *f ^ *s;
    *f = *f ^ *s;
}

// selection sort
void selectionSort(int *arr, int size) {
    int temp; 
    for(int i=0; i<size-1; i++) {
        temp = i;
        for(int j=i+1; j<size-i-1; j++) {
            if(arr[temp]>arr[j]){
                temp = j;
            }
        }       
        swap(&arr[i], &arr[temp]);
    }
}

// buble sort
void bubleSort(int *arr, int size) {
    int i, j;
    for(i=0; i<size-1; i++) {
        int temp = i;
        for(j=i; j<size-i-1; j++) {
            if(arr[temp]>arr[j+1]) {
                swap(&arr[i], &arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {2, 4, 3, 7, 9};
    //selectionSort(arr, 5);
    bubleSort(arr, 5);
    for(int i=0; i<5; i++) {
        printf("%d->", arr[i]);
    }
}