/*
Assignment - Lab 2
    Check number is prime or not using function.
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    int num;
    printf("Enter number to find prime number : ");
    scanf("%d", &num);
    bool f = false;
    int n = num/2;
    for(int i=2; i<n+1; i++) {
        int p;
        p = num%n;
        if(p==0) {
            f = true;
            break;
        }
    }
    if(f || num==1) {
        printf("%d is not prime number...", num);
    } else if(num==2){
        printf("%d is prime number...", num);
    } else {
        printf("%d is prime number...", num);        
    }
}