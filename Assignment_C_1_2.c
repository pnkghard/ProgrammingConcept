/*
Assignment - Lab 1
    Write a C program to enter two numbers and perform all arithmetic operations.
*/

#include<stdio.h>

int main(){
    int num1, num2;
    printf("Enter 1st Number : ");
    scanf("%d", &num1);
    printf("Enter 2nd Number : ");
    scanf("%d", &num2);
    int add;
    add = num1 + num2;
    printf("Addition of %d and %d : %d", num1, num2, add);
    int sub;
    sub = num1 - num2;
    printf("\nSubstraction %d from %d : %d", num1, num2, sub);
    int multy;
    multy = num1 * num2;
    printf("\nMultiplication of %d and %d : %d", num1, num2, multy);
    float div;
    div = num1 / num2;
    printf("\nDivision of %d and %d : %f", num1, num2, div);
}