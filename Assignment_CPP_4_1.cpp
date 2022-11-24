/*
Assignment - Lab 4
    Write a C++ program to reverse the element of an integer array.
*/

#include <iostream>
using namespace std;

void swapNumber(int *num, int size) {
    int n = size/2;
    for(int i=0; i<n; i++){
        num[i] = num[1] ^ num[size-i-1];
        num[size-i-1] = num[1] ^ num[size-i-1];
        num[i] = num[1] ^ num[size-i-1];
    }
    for(int i=0; i<size; i++) {
        cout << num[i] << " ";
    }
}

int main() {
    int num[] = {1, 2, 3, 4, 5};
    swapNumber(num, 5);
}