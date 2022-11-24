/*
Assignment - Lab 1                                                                     
    Write a C program to perform input/output of all basic data types.
*/

#include<stdio.h>

int main(){
    char c;
    printf("i for integer number. \n f for decimal number.");
    scanf("%c", &c);
    if (c=='i') {
        int num1;
        scanf("%d", &num);
        printf("Your Enter integer number : %d", num);
    } else if (c=='f') {
        float num;
        scanf("%f", &num);
        printf("Your Entered floating number : %f", num);
    }
}