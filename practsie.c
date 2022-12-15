#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    int pri;
    struct Node * next;
};

struct Node *front;
struct Node *ptr;
struct Node *p;
void dequeue(){
    printf("%d priority and %d element was popped \n",front->pri,front->data);
    front = front->next;
}
void enqueue(){
    int val , pri;
    printf("Enter data and its priority\n");
    scanf("%d",&val);
    scanf("%d",&pri);
    struct Node * newnode = (struct Node *)malloc(sizeof(struct Node *));
    newnode->data = val;
    newnode->pri = pri;


}