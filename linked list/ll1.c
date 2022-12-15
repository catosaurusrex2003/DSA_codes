#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data ;
    struct Node *next;
};

struct Node * insert_at_beg(struct Node * head , int data){
    struct Node * ptr = (struct Node * )malloc(sizeof(struct Node )); //made a node with name ptr
    ptr -> next = head;
    ptr -> data = data;
    return(ptr);
}

void insert_at_index(struct Node * head , int data , int index){
    struct Node * ptr = (struct Node * )malloc(sizeof(struct Node )); //made a node with name ptr
    int i = 0;
    struct Node * p = head; // thi sis done to make sure that head is noty lost
    while(i!=index-1){
        p = p->next;
        i++;
    }
    ptr -> next = p->next;
    p->next = ptr;
    ptr->data = data;
}

struct Node * insert_at_end(struct Node * head , int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;

    ptr -> data = data;

    while(p -> next != NULL){
        p = p->next;
    }

    p -> next = ptr;
    ptr ->next = NULL;
}

void insert_after_node(struct Node * prevnode , int data){
    // INSERT A WHILE LOOP
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> data = data;
    ptr -> next = prevnode -> next;
    prevnode -> next = ptr;
}

void traverse(struct Node *ptr){
    while(ptr != NULL ){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;

    //allocate memory for nodes in the linked list in heap
    
    head = (struct Node *)malloc(sizeof(struct Node));
    second  = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    //linking first and secind node
    head -> data = 7;
    head -> next = second;
    
    //linking second and third node
    second -> data = 10;
    second -> next = third;
    //terminating the third node
    third -> data = 15;
    third -> next = NULL;

    traverse(head);

    head = insert_at_beg(head , 50);

    traverse(head);

    insert_at_index(head , 69 , 1);

    traverse(head);

    insert_at_end(head,99);

    traverse(head);

    insert_after_node(third , 44);

    traverse(head);
}