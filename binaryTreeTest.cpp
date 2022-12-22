#include "stdio.h"
#include "stdlib.h"

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data){
    struct node *newNode=(struct node*) malloc(sizeof(struct node));
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}

struct node *leftNode(struct node *root, int data){

    root->left=createNode(data);

    return root->left;
}

struct node *rightNode(struct node *root, int data){

    root->right= createNode(data);

    return root->right;
}

void inorderTraversal(struct node *root){
    if(root==NULL)return ;
    inorderTraversal(root->left);
    printf(" %d ->",root->data);
    inorderTraversal(root->right);
}

void preorderTraversal(struct node *root){
    if(root == NULL)return;
    printf("%d->",root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(struct node *root){
    if(root == NULL)return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf(" %d -> ", root->data);
}

int main(){

    struct node*root= createNode(10);
    leftNode(root,5);
    rightNode(root,15);
    leftNode(root->left,3);
    rightNode(root->right,20);
    inorderTraversal(root);


}