//
// Created by PRO on 22/12/16.
//

#include "stdio.h"
#include "stdlib.h"

struct node{
    int data;
    struct node *left, *right;
};

struct node *createNode(int data){
    struct node *newNode=(struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct node *leftNode(struct node *root,int data){
    root->left = createNode(data);
    return root->left;
}

struct node *rightNode(struct node *root, int data){
    root->right = createNode(data);
    return root->right;
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

struct node *searchNode(struct node *root, int data){
    if(root == NULL)return root;
    if(data == root->data){
        printf("\n\nWe found data : %d\n",root->data);
    }
    else if(data < root->data){
        return searchNode(root->left, data);
    }
    else if(data > root->data){
        return searchNode(root->right, data);
    }
    return root;
}

struct node *updateNode(struct node *root, int oldData, int newData){
    if(root==NULL)return root;
    if(root->data == oldData){
        root->data = newData;
        printf("Data Updated.\n");
        printf("Old Data : %d\n", oldData);
        printf("New Data : %d\n", root->data);

        return root;
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
    printf("Data -> %d  ;", root->data);
    inorderTraversal(root->right);
}

void preorderTraversal(struct node *root){
    if(root == NULL)return;
    printf("Data -> %d  ;", root->data);
    inorderTraversal(root->left);
    inorderTraversal(root->right);
}

void postorderTraversal(struct node *root){
    if(root == NULL)return;
    inorderTraversal(root->left);
    inorderTraversal(root->right);
    printf("Data -> %d  ;", root->data);
}

int main(){
    struct node *root = createNode(10);
    insertNode(root, 18);
    insertNode(root, 7);
    insertNode(root, 15);
    insertNode(root, 5);
    insertNode(root, 12);
    insertNode(root, 3);
    insertNode(root, 20);
    insertNode(root, 1);

    inorderTraversal(root);
    searchNode(root, 20);
    updateNode(root, 15, 27);
    inorderTraversal(root);





    return 0;
}