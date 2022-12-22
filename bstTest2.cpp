//
// Created by PRO on 22/12/17.
//

#include "stdio.h"
#include "stdlib.h"

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct node *insertNode(struct node *root, int data){
    if(root == NULL){
        return createNode(data);
    }
    else if(data < root->data){
        root->left = insertNode(root->left, data);
    }
    else if(data > root->data){
        root->right = insertNode(root->right, data);
    }
    return root;
}

void searchNode(struct node *root, int data){
    if(root == NULL)return;
    if(data == root->data){
        printf("We found data >> %d\n",root->data);
    }
    else if(data < root->data){
        return searchNode(root->left, data);
    }
    else if(data > root->data){
        return searchNode(root->right, data);
    }
}

struct node *updateNode(struct node *root, int oldData, int newData){
    if(root == NULL)return root;
    if(oldData == root->data){
        root->data = newData;
        printf("Data updated...\n");
        printf("Old data >> %d\nNew data >> %d\n",oldData, root->data);
    }
    else if(oldData < root->data){
        return updateNode(root->left, oldData, newData);
    }
    else if(oldData > root->data){
        return updateNode(root->right, oldData, newData);
    }
    return root;
}

void inorderTraversal(struct node *root){
    if(root == NULL)return;
    inorderTraversal(root->left);
    printf("data >> %d  ;",root->data);
    inorderTraversal(root->right);
}

void preorderTraversal(struct node *root){
    if(root == NULL)return;
    printf("data >> %d  ;",root->data);
    inorderTraversal(root->left);
    inorderTraversal(root->right);
}

void postorderTraversal(struct node *root){
    if(root == NULL)return;
    inorderTraversal(root->left);
    inorderTraversal(root->right);
    printf("data >> %d  ;",root->data);
}

int main(){
    struct node *root = createNode(20);
    insertNode(root, 5);
    insertNode(root, 25);
    insertNode(root, 10);
    insertNode(root, 30);
    insertNode(root, 15);
    insertNode(root, 35);
    printf("Inorder Traversal...\n");
    inorderTraversal(root);
    printf("\nPreorder Traversal...\n");
    preorderTraversal(root);
    printf("\nPostorder Traversal...\n");
    postorderTraversal(root);
    printf("\n\n");

    searchNode(root, 15);
    updateNode(root, 30, 33);
    printf("Inorder Traversal...\n");
    inorderTraversal(root);


    return 0;
}