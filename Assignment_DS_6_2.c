/*
Assignment - Lab 6
    Implement sorting algorithm for selection sort, Bubble sort, heap sort and quick sort.
*/

#include<stdio.h>

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
        for(int j=i+1; j<size; j++) {
            if(arr[temp]<arr[j]){
                temp = j;
            }
        }       
        swap(&arr[i], &arr[temp]);
    }
}

int main(){
    int arr[] = {2, 4, 3, 7, 9};
    selectionSort(arr, 5);
    for(int i=0; i<5; i++) {
        printf("%d->", arr[i]);
    }
}