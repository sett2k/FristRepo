#include "stdio.h"
#include "stdlib.h"
#define RogueValue -900
#define MaxStack 5

typedef struct {
    int top;
    int ST[MaxStack];
}StackType, *Stack;

int main(){
    Stack createStack(Stack S);
    void push(Stack S, int n);
    int pop(Stack S, int n);
    int empty(Stack S);
    int n;

    Stack S = createStack(S);
    printf("Push 5 integers into Stack; ends with 0:::\n");
    scanf("%d",&n);
    while(n != 0){
        push(S, n);
        scanf("%d",&n);
    }

    printf("Data from Stack:::\n");
    while(!empty(S)) {
        printf("Popped Data: %d  ,", pop(S, n));
    }



    return 0;
}

Stack createStack(Stack S){
    S = (Stack)malloc(sizeof(StackType));
    S->top = -1;
    return S;
}

void push(Stack S, int n) {
    if (S->top == MaxStack - 1) {
        printf("Stack OverFlow...\n");
        exit(1);
    }

    ++(S->top);
    S->ST[S->top] = n;
    printf("Stack data : %d\n",n);
}

int empty(Stack S){
    return (S->top == -1);
    //printf("Empty Stack...\n");
}

int pop(Stack S, int n){
    if(empty(S))return RogueValue;
    int receive = S->ST[S->top];
    (S->top)--;
    return receive;
}