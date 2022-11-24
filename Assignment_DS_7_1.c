/*
Assignment - Lab                                                                      
    Implement Stack using Arrays/Linked list
*/

#include<stdio.h>
#define size 10

int top = -1, stack[size];

// adding in stack
void push() {
    if(top>=size) {
        printf("stack is full..\n element not added in stack\n");
    } else {
        int data;
        scanf("%d", &data);
        stack[++top] = data;
    }
}

//delete element in stack
void pop() {
    if(top==-1){
        printf("stack is already empty...\n");
    } else {
        printf("%d is deleted from stack..\n", stack[top]);
        top--;
    }
}

//display stack element
void display() {
    if(top==-1) {
        printf("stack is empty....\n");
    } else {
        for(int i=0; i<=top; i++) {
            printf("%d->", stack[i]);
        }
    }
}

int main() {
    int cl=0;
    while(cl!=4) {
        printf("1. Add element in Stack \n 2. display all element \n 3. delete element \n 4. exit\n Enter your choice : ");
        scanf("%d", &cl);
        printf("\n");
        if(cl==1){
            push();
        } else if(cl==2) {
            display();
        } else if(cl==3) {
            pop();
        } else if(cl==4) {
            printf("Thanks for visiting........\n");
        } else {
            printf("Wrong choice try again.....\n");
        }
    }
}