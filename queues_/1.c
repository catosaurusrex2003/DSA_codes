// SIMPLE QUEUE
#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int * arr;
};

int isFull(struct queue * q){
    if(q->r == q->size-1){
        return 1;
    }
    return 0;
}

int isEmpty(struct queue * q){
    if(q->f == q->r){
        return 1;
    }
    return 0;
}

void enqueue(struct queue * q , int data){
    if(isFull(q)){
        printf("is full");
    }
    else{
        q->r++;
        q->arr[q->r] = data;
    }
}

int dequeue(struct queue * q){
    if(isEmpty(q)){
        printf("is Empty");
    }
    else{
        q->f++;
        int a = q->arr[q->f];
        return a;
    }
}

void display(struct queue * q){
    for( int i = 0 ; i < q->size ; i++ ){
        printf("%d ",q->arr[i]);
    }
}

void main(){
    struct queue *q;
    q->size = 4;
    q->f = q->r = 0;
    q->arr = (int *)malloc(q->size*sizeof(int));
    enqueue(q,10);
    printf("%d",q->arr[q->r]);
    // dequeue(q);
    // dequeue(q);
    // dequeue(q);
}