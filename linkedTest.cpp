//
// Created by PRO on 22/12/08.
//
#include "stdio.h"
#include "stdlib.h"

struct node{

    int data;
    struct node *next;

};

int printData(struct node* myNode){
    while(myNode != NULL){
        printf("data: %d\n",myNode->data);
        myNode=myNode->next;
    }
    return 1;
}


void swapData(struct node *firstNode, struct node *secondNode, int dataOne, int dataTwo) {

    int temp1;
    int temp2;

    if (firstNode == NULL || secondNode ==NULL){
        printf("Null Node.\n");
    }
    while(firstNode!=NULL && secondNode!=NULL){

        if(firstNode->data==dataOne){
            temp1=dataOne;
            //return firstNode;
            if(secondNode->data==dataTwo){
                temp2=dataTwo;
                firstNode->data=temp2;
                secondNode->data=temp1;
                break;
                //return firstNode;
                //return secondNode;
            }else{
                secondNode = secondNode->next;
            }

        }else{
            firstNode= firstNode->next;
        }
    }
}

void swapNode(struct node *firstNode, struct node *secondNode, int dataOne, int dataTwo){
    int temp1;
    int temp2;
    struct node *tempNode=NULL;

    if(firstNode == NULL || secondNode == NULL){
        printf("Null Node.");
    }
    while(firstNode != NULL && secondNode != NULL){

        if(firstNode->data == dataOne){
            temp1=dataOne;
            //firstNode->next=secondNode->next;

            if(secondNode->data == dataTwo){
                temp2 = dataTwo;
                firstNode->data=temp2;
                secondNode->data=temp1;
                firstNode->next=secondNode->next;
//                tempNode=secondNode->next;
//                secondNode->next=firstNode->next;
//                firstNode->next=tempNode;
                break;
            }else{
                secondNode = secondNode->next;
            }
        }else{
            firstNode =  firstNode->next;
        }
    }
}


struct node *deleteNode(struct node *myNode, int myData){
    struct node *toReturn=myNode;
    struct node *prevNode=NULL;
    struct node *insertNode=static_cast<node*>(malloc(sizeof(struct node)));
    int insertData = 100;

    if(myNode==NULL){
        printf("Null Node.\n");
    }else if(myNode->data==myData){
        insertNode->data=insertData;
        insertNode->next=myNode->next;
        return insertNode;
    }else {
        while (myNode != NULL) {
            if (myNode->data == myData) {
                insertNode->next=myNode->next;
                insertNode->data=insertData;
                prevNode->next=insertNode;
                return toReturn;
            } else {
                prevNode=myNode;
                myNode=myNode->next;
            }
        }
    }
    return myNode;
}






struct node *toDeleteNcc(struct node *removeNode, int removeData){
    struct node *returnNode=removeNode;
    struct node *pastNode=NULL;

    if(removeNode==NULL){
        printf("Null Node.\n");
    }else if(removeNode->data==removeData){
        removeNode=removeNode->next;
    }
    else{
        while(removeNode!=NULL){
            if(removeNode->data==removeData){
                //pastNode=removeNode;
                pastNode->next=removeNode->next;
                return returnNode;
            }
            else{
                pastNode=removeNode;
                removeNode=removeNode->next;
            }
        }
    }
    return removeNode;
}


int main(){

    struct node *one =NULL;
    struct node *two = NULL;
    struct node *three=NULL;
    struct node *four=NULL;
    struct node *five=NULL;

    one=static_cast<node*>(malloc(sizeof (struct node)));
    two=static_cast<node *>(malloc(sizeof(struct node)));
    three=static_cast<node *>(malloc(sizeof(struct node)));
    four=static_cast<node *>(malloc(sizeof(struct node)));
    five=static_cast<node *>(malloc(sizeof(struct node)));

    one->data=10;
    two->data=20;
    three->data=30;
    four->data=40;
    five->data=50;

    one->next=two;
    two->next=three;
    three->next=four;
    four->next=five;
    five->next=NULL;

    printf("\nPrinted Data >>\n");
    printData(one);
    printf("\n");

//    printf("Data Deleted >> \n");
//    struct node *receive= toDeleteNcc(one,50);
//    printData(receive);

//    printf("Data Swapped >> \n");
//    swapData(one, one, 30,10);
//    printData(one);

    printf("Node Deleted >> \n");
    struct node *receive= deleteNode(one ,10);
    printData(receive);

//    printf("Note Swapped >>\n");
//    swapNode(one, one, 10, 40);
//    printData(one);




    return 0;
}