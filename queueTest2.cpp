//
// Created by PRO on 22/12/16.
//

#include "stdio.h"
#include "stdlib.h"
#define MaxElement 5

typedef struct{
    int front;
    int rear;
    int QUE[MaxElement];
} QueueType, *Queue;

int main(){
    Queue createQue(Queue Q);
    void push(Queue Q, int n);
    int empty(Queue Q);
    int pop(Queue Q, int n);
    int n;

    Queue Q = createQue(Q);
    printf("Push 5 integers into Queue, ends with 0...\n");
    scanf("%d", &n);
    while(n != 0){
        push( Q, n);
        printf("Queue Data:: %d\n",n);
        scanf("%d",&n);
    }

    printf("\nData Popped::\n");
    while(!empty(Q)){
        printf("Popped Data:: %d  ,", pop(Q,n));
    }


    return 0;
}

Queue createQue(Queue Q){
    Q = (Queue) malloc(sizeof(QueueType));
    Q->front = -1;
    Q->rear = -1;
    return Q;
}

void push(Queue Q, int n){
    if(Q->rear == MaxElement - 1){
        printf("Queue is Full...\n");
        exit(1);
    }else{
        if(Q->front == -1)
            Q->front = 0;
        (Q->rear)++;
        Q->QUE[Q->rear] = n;
    }
}

int empty(Queue Q){
    return(Q->front == -1);
}

int pop(Queue Q, int n){
    if(empty(Q)){
        printf("Queue is Empty...\n");
        exit(1);
    }else{
        int receive = Q->QUE[Q->front];
        (Q->front)++;
        if(Q->front > Q->rear){
            Q->front = Q->rear = -1;
        }
        return receive;
    }
}