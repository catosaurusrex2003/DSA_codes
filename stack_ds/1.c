#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack * ptr){
    // O(1)
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack * ptr){
    // O(1)
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0 ;
    }
}



void push(struct stack * ptr, int value){
    // O(1)
    if(isFull(ptr)){
        printf("stack overflow. cannot push %d to the stack",value);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
int pop(struct stack * ptr ){
    // O(1)
    if(isEmpty(ptr)){
        printf("stack is empty. cannot pop");
        return 0;
    }
    else{
        int value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}

int printStack(struct stack * ptr){
    // O(n)
    printf("stack is ");
    for(int i = 0 ; i<=ptr->top ; i++){
        printf("%d ",ptr->arr[i]);
    }
    printf("\n");
}
int peek(struct stack * ptr ,  int index){
    // O(1)
    if((ptr->top -index + 1 )< 0 ){
        printf("not a valid index\n");
    }
    else{
        printf("the element at %d is %d\n" ,index , ptr->arr[ptr->top -index + 1]  );
    }
}
void main(){   
    // struct stack s;
    // when s is a stack then u dont have to use the arrow
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int*)malloc(s.size*sizeof(int));
    struct stack *s  = (struct stack *) malloc(sizeof(struct stack));
    // when s is a pointer then u have to use an arrow
    s->size = 10;
    s->top = -1;
    s->arr = (int*)malloc(s->size*sizeof(int));
    push(s,7);
    // printStack(s);
    push(s,9);
    printStack(s);
    peek(s,1);
    printf("%d\n",pop(s));
    // printStack(s);
    printf("%d\n",pop(s));
    // printStack(s);
    printf("%d\n",pop(s));
    // printStack(s);

}