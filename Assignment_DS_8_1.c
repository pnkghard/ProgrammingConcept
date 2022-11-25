/*
Assignment - Lab
    Write a program to implement a binary search tree.
*/

#include <stdio.h>
#include <stdlib.h>
 

 // node for binary tree
struct node {
    int key;
    struct node *left, *right;
};

//function for adding neew node
struct node* addNode(int item) {
    struct node* temp
        = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
 
// display tree
void display(struct node* root) {
    if (root != NULL) {
        display(root->left);
        printf("%d \n", root->key);
        display(root->right);
    }
}
 
// insert between node
struct node* insert(struct node* node, int key) {
    if (node == NULL) {
        return addNode(key);
    }
    if (key < node->key) {
        node->left = insert(node->left, key);
    }
    else if (key > node->key) {
        node->right = insert(node->right, key);
    }
    return node;
}


int main() {
    struct node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    display(root); 
    return 0;
}