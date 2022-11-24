/*
Assignment - Lab 2                                                                 
    C program to change string to upper case without strupr.
*/

#include<stdio.h>
#include<ctype.h>

int main(){
    char ch[6] = "pankaj";
    printf("\nYou enter word %s", ch);
    printf("\nWord in upper case : ");
    for(int i=0; i<10; i++) {
        printf("%c", toupper(ch[i]));
    }
}