// STACK USING LINKED LIST
// THERE IS NO FIXED SIZE OF STACK
// BUT U WILL HAVE TO SET A CUSTOM SIZE

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

struct stack{
    int size ;
    int top ;
    struct Node *head;
};

int isEmpty(struct stack * top){
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct Node * ptr){
    struct Node * p = (struct Node *)malloc(sizeof(struct Node));
    if( p == NULL){ 
        return 1;
    }
    else{
        return 0;
    }
}

struct Node * push(struct Node * ptr , int data){
    if(isFull(ptr)){
        printf("stack overflow cant push \n");
    }
    else{
        struct Node * n = (struct Node *)malloc(sizeof(struct Node));
        n->data = data;
        n->next = ptr;
        ptr = n;
        return ptr;
    }

}

int pop(){

}

int peek(){

}
void traverse(struct Node *ptr){
    while(ptr != NULL ){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void main(){
    // struct stack *s = (struct stack *) malloc(sizeof(struct stack));
    struct Node * top = NULL;
    top = push(top, 78);
    top = push(top, 78);
    top = push(top, 78);
    top = push(top, 78);
    top = push(top, 78);
    traverse(top);

}
