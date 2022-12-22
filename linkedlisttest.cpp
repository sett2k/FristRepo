#include "stdio.h"
#include "stdlib.h"

struct node{
    int data;
    struct node *next;
};

struct node* updateData(struct node *myNode, int oldData, int newData){
   // struct node *newNode=myNode;
    if(myNode==NULL){
        printf("Node is NULL\n");
    }
    while(myNode!=NULL){

        if(myNode->data==oldData){
            myNode->data=newData;
            printf("Original data:%d",oldData);
            printf("\nupdated Data:%d",myNode->data);

            //return myNode;
        }
        else{
            myNode=myNode->next;
        }
    }
}

struct node *removeNode(struct node *myNode, int myData){
    struct node *returnNode=myNode;

    struct node *prevNode=NULL;
    struct node *presentNode=NULL;
    struct node *nextNode=NULL;

    if(myNode==NULL){
        printf("Null Node.\n");
    }else if(myNode->data==myData){
        return myNode->next;
    }else {
        while (myNode != NULL) {

            if (myNode->data == myData) {

                nextNode=myNode->next ;
                prevNode->next=nextNode;
                return returnNode;
            } else {
                prevNode = myNode;
                myNode = myNode->next;
            }
        }
    }
}

struct node * insertStart(struct node *firstNode, int data) {

    struct node *beginNode = (struct node *) malloc(sizeof(struct node));

    beginNode->data = data;

    beginNode->next = firstNode;

    firstNode = beginNode;
    return firstNode;
}

int insertStartRef(struct node **topNode, int topData){
    struct node *openNode=(struct node *)malloc(sizeof(struct node));
    openNode->data=topData;
    openNode->next=(*topNode);
    *topNode=openNode;
}

int insertAfter(struct node *prevNode, int data){
    struct node *newNode=static_cast<node*>(malloc(sizeof(struct node)));
    if(prevNode==NULL){
        printf("Null Node.\n");
        return 0;
    }
    while(prevNode!=NULL){
        newNode->next=prevNode->next;
        newNode->data=data;
        prevNode->next=newNode;
        printf("After Inserting;\n");

        return 1;
    }
}

struct node *deleteNode( struct node *removeNode, int removeData) {
    struct node * returnNode=removeNode;
    printf("Hello\n");

    struct node *frontNode=NULL;
    struct node *currentNode=NULL;
    struct node *backNode=NULL;

    if(removeNode==NULL){
        printf("Null Node.");
    }else if(removeNode->data==removeData){
        return removeNode->next;
    }else{
        while(removeNode!=NULL){
            currentNode=removeNode;
            if(currentNode->data==removeData){

                frontNode->next =currentNode->next;
               //=frontNode;
                // free(currentNode);
                return returnNode;
                printf("Hello Two.\n");
            }else{
               frontNode=removeNode;
                removeNode=removeNode->next;

                printf("Show Something.\n");
            }
        }
        printf("While Loop.\n");
    }return removeNode;
}

int searchData(struct node *searchNode, int searchData){
    if(searchNode==NULL){
        printf("Null Node.\n");
    }
    while(searchNode!=NULL){
        if(searchNode->data==searchData){
            return 1;
        }else{
            searchNode=searchNode->next;
        }
    }
    return -1;

}

int printData(struct node *myNode){
    while(myNode!=NULL){
        printf("Data : %d\n",myNode->data);
        myNode=myNode->next;

    }
}

int main() {

    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;
    struct node *four = NULL;
    struct node *five = NULL;

    one = static_cast<node *>(malloc(sizeof(struct node)));
    two = static_cast<node *>(malloc(sizeof(struct node)));
    three = static_cast<node *>(malloc(sizeof(struct node)));

    one->data = 10;
    two->data = 20;
    three->data = 30;

    one->next = two;
    two->next = three;
    three->next = four;

    printData(one);
    printf("\n");
//    updateData(one, 20, 100);
//    printf("\n\n");
//    printData(one);
//    printf("\n");
    insertAfter(two, 200);
    printData(one);
    printf("\n");

//    insertStartRef(&one,1);
//    printData(one);
//    printf("\n");

//    struct node *startNode = insertStart(one, 2);
//    printData(startNode);
//    printf("\n");

//    deleteNode(one,1);
//    //printData(receiveNode);
//    printf("\n");
//    printData(one);

    struct node *receive=removeNode(one,1);
    printData(receive);
    printf("\n\n");
    printData(one);
    printf("\n\n");

    int integer=searchData(one, 200);
    if(integer==1){
        printf("We Found data: \n");
    }else{
        printf("Data Not Found.\n");
    }

}