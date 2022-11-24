/*
Assignment - Lab 3
    Any year is input by the user. Write a program to determine whether the year is a leap year or not.
*/

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Year : ";
    cin >> year;
    if(year%4==0) {
        cout << "year " << year << " is leap year." << endl;
    } else {
        cout << "year " << year << " is not leap year." << endl;
    }
}