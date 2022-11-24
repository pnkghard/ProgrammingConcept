/*
Assignment - Lab 2
    Find LCM of numbers using recursion.
*/

#include <stdio.h>

int gcdOfNumber(int num1, int num2, int min, int i) {
    int gcd;
    if (gcd>=min) {
        return gcd;
    }
    if(num1>num2) {
        gcd = num1%num2;
    }
    gcdOfNumber(num1, num2, min, i+1);
}

int main(){
    printf("Enter two integer number : ");
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int min;
    min = (num1 < num2)? num1 : num2;
    int lcm;
    lcm = (num1 * num2)/gcdOfNumber(num1, num2, min, 0);
    printf("lcm of %d and %d is %d", num1, num2, lcm);
}