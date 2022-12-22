//
// Created by PRO on 22/12/17.
//
#include <stdio.h>
#include <stdlib.h>

struct Node{

    int key;
    struct Node *left;
    struct Node *right;

};

struct Node * createNode(int data){

    struct Node *newNode =malloc(sizeof (struct Node));
    newNode->key=data;
    newNode->left=NULL;
    newNode->right=NULL;



    return newNode;
}

struct Node *insert(struct Node *myNode,int key){

    if(myNode==NULL)
        return createNode(key);

    if(key <myNode->key)

        myNode->left=insert(myNode->left, key);

    if(key > myNode->key)

        myNode->right=insert(myNode->right,key);




    return myNode;
}

void inorder(struct Node *node){
    //(root->left,root,root->right)
    if(node!=NULL){
        inorder(node->left);
        printf("->%d",node->key);
        inorder(node->right);
    }

}
void preorder(struct Node *root){
    //(root,root->left,root->right)
    if(root!=NULL){
        printf("->%d",root->key);
        preorder(root->left);
        preorder(root->right);


    }}

void postorder(struct Node *root){
//(root->left,root->right,root)
    if(root!=NULL){

        postorder(root->left);
        postorder(root->right);
        printf("->%d",root->key);

    }}

struct Node *search(struct Node*Node,int s_item){

    if(Node==NULL ){
        printf("Node is NULL");
        exit (0);

    }
    if(Node->key==s_item){

        return Node;
    }

    if(s_item <Node->key)

        Node->left=search(Node->left, s_item);



    if(s_item >Node->key)

        Node->right=search(Node->right, s_item);

    return Node;
}


struct Node *Toupdate(struct Node *myNode,int data1,int newdata){

    struct Node*Update=myNode;

    if(myNode==NULL )
        printf("Node is NULL");
    return NULL;

    if(data1 < myNode->key)

        myNode->left=search(myNode->left,data1);
    myNode->key=newdata;

    if(data1 > myNode->key)


        myNode->right=search(myNode->right,data1);

    myNode->key=newdata;

    return Update;








}


int main (){


    struct Node *root =createNode(50);
    insert(root,30 );
    insert (root,20);
    insert(root,40);
    insert(root,70);
    insert(root,60);
    insert(root,80);

    printf("\npreorder\n");
    inorder(root);

    printf("\nAfter search data\n");
    root= search(root, 80);
    printf("we found %d\n");
    inorder(root);


    printf("\nAfter update\n");
    root=Toupdate(root,20,25 );

    inorder(root);


/*
 printf("\nInorder\n") ;
    inorder(root);

 printf("\nPostorder\n");

  postorder(root );

  */


    return 0;
}
