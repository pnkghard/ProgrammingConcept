/*
Assignment - Lab 3
    Write a program to swap the values of two variables without using third variable.
*/

#include <iostream>
using namespace std;

void swapNumber(int a, int b) {
    cout << "given numbers : " << a << "\t" << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "Swaped number : " << a << "\t" << b << endl;
}

int main() {
    int a, b;
    cout << "Enter two number : ";
    cin >> a >>b;
    swapNumber(a, b);
}