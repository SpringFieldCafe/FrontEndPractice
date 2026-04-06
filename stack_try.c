#include <stdio.h>
#define MaxSize 10
#include <stdlib.h>

typedef struct Snode *Stack;
struct Snode{
    int Top;
    int Data[MaxSize];
};

int is_full(Stack S){
    return ((S->Top)==(MaxSize-1));
}

int is_empty(Stack S){
    return ((S->Top)==-1);
}
void push(Stack S,int item){
    if(is_full){
        printf("Full");
        return;
    }
    else{
        S->Data[++(S->Top)]=item;
        return;
    }
}
int pop(Stack S){
    if(is_empty){
        printf("Empty!");
        return ;
    }
    else {
        return S->Data[(S->Top)--];
    }
}

Stack CreateStack(){
    Stack A_Point_to_Stack=(Stack)malloc(sizeof(struct Snode));
    if(A_Point_to_Stack==NULL){
        printf("fail！");
    }
    else {
        (A_Point_to_Stack->Top)=-1;
        return A_Point_to_Stack;
    }
}