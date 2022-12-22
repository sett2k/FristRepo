//
// Created by PRO on 22/12/17.
//
#include "stdio.h"
#include "stdlib.h"

struct node{
    int data;
    struct node *next;
};
struct node *top = NULL;

int empty(){
    return (top == NULL);
}

void push(){
    int n;
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    printf("Push a data >> ");
    scanf("%d", &n);
    newNode->data = n;
    if(newNode == NULL){
        printf("Data cannot be pushed.\n");
    }
    else if(top == NULL){
        newNode->next = NULL;
    }
    else{
        newNode->next = top;
    }
    top = newNode;
    printf("data Pushed.\n\n");
}

void pop(){
    struct node *temp = top;
    while (!empty()){
        printf("Popped data >> %d\n", top->data);
        top = temp->next;
        temp = temp->next;
    }
    free(temp);
}

void printData() {
    if (empty()) {
        printf("Empty Stack...\n");
    } else {
        while (top != NULL) {
            printf("Stack data >> %d\n",top->data);
            top = top->next;
        }
    }
}

int main(){
    push();
    push();
    push();
    pop();
    printData();

    return 0;
}
