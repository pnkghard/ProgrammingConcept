/*
Assignment - Lab 4
    Write a program to check character entered is alphabet, digit or special character using library functions.
*/

#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
    string s = "1sd@";
    for(int i=0; i<s.size(); i++){
        if(isalpha(s.at(i))){
            cout << s.at(i) << " is alphabet." << endl;
        } else if(isdigit(s.at(i))) {
            cout << s.at(i) << " is number." << endl;
        } else {
            cout << s.at(i) << " is character.";
        }
    }
}