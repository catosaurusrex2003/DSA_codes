// SIMPLE circularQueue
#include<stdio.h>
struct circularQueue{
    int size;
    int f;
    int r;
    int * arr;
};

int isFull(struct circularQueue * q){
    if((q->r+1)%q->size == q->f){
        return 1;
    }
    return 0;
}

int isEmpty(struct circularQueue * q){
    if(q->f == q->r){
        return 1;
    }
    return 0;
}

void enqueue(struct circularQueue * q , int data){
    if(!isFull(q)){
        q->r = (q->r+1)%q->size;
        q->arr[q->r] = data;
    }
}

void deQueue(struct circularQueue * q){
    if(!isEmpty(q)){
        q->f = (q->f+1)%q->size;
        int a = q->arr[q->f];
        return a;
    }
}

void main(){
    struct circularQueue *q;
    q->size = 4;
    q->f = q->r = 0;
    q->arr = (int *)malloc(q->size*sizeof(int));
}