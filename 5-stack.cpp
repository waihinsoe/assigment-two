#include "stdio.h"
#include "stdlib.h"
#define MAXOFSTACK 10
struct stack{
    int data[MAXOFSTACK];
    int top;
};

typedef struct stack st;

void createEmptyStack(st* myStack){
    myStack->top = -1;
}

int isStackIsFull(st *myStack){
    if(myStack->top == MAXOFSTACK-1){
        return 1;
    }else{
        return 0;
    }
}

void pushToStack(st* myStack, int data){
    if(isStackIsFull(myStack)){
        printf("stack is full.\n");
    } else{
        myStack->top++;
        myStack->data[myStack->top] = data;
    }
}

int isStackIsEmpty(st* myStack){
    if(myStack->top == -1){
        return 1;
    }else{
        return 0;
    }
}

void popFromStack(st* myStack){
    if(isStackIsEmpty(myStack)){
        printf("Stack is empty!!\n");
    }else{
        printf("There are %d data in stack\n", (myStack->top)+1);
        int toCount = (myStack->top)+1;
        while (myStack->top != -1){
            printf("data in %d place : %d \n",toCount,myStack->data[myStack->top]);
            myStack->top--;
            toCount--;
        }
    }
}

int main() {

    st * myStack = (st*) malloc(sizeof (st));

    createEmptyStack(myStack);

    pushToStack(myStack, 10);
    pushToStack(myStack, 12);
    pushToStack(myStack, 13);
    pushToStack(myStack, 14);
    pushToStack(myStack, 15);
    pushToStack(myStack, 16);
    pushToStack(myStack, 17);
    pushToStack(myStack, 18);
    pushToStack(myStack, 19);
    pushToStack(myStack, 20);



    popFromStack(myStack);






    return  0;
}