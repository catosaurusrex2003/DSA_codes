#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void printll(struct Node *ptr){

    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr -> next;
    }
    printf("\n");
}

struct Node * deleting_first(struct Node *head){
    struct Node * ptr = head;

    head = head -> next;

    free(ptr);

    // return(head);
}

struct Node * delete_at_index(struct Node * head , int index){
    struct Node *p = head;
    struct Node *q = head -> next;
    for(int i = 0 ; i < index -1 ; i ++){
        q = q -> next;
        p = p -> next;
    }
    p -> next = q -> next;
    free(q);
}

struct Node * delete_last(struct Node * head ){
    struct Node *p = head;
    struct Node *q = head -> next;

    while(q->next != NULL){
        p = p -> next;
        q = q -> next;
    }
    p -> next = NULL;
}

struct Node * delete_specific_element(struct Node * head , int element){
    struct Node * p = head;
    struct Node * q = head -> next;

    while(q -> data != element && q != NULL ){
        p = p -> next;
        q = q -> next;
    }

    if(q -> data == element){
        p -> next = q -> next;
    }

}

void main(){
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fourth = (struct Node *)malloc(sizeof(struct Node));

    head -> data = 7;
    head -> next = second;
    
    //linking second and third node
    second -> data = 10;
    second -> next = third;

    //terminating the third node
    third -> data = 15;
    third -> next = fourth;

    fourth -> data = 20;
    fourth -> next = NULL;

    printll(head);

    deleting_first(head);

    printll(head);

    // delete_at_index(head , 2);

    // printll(head);

    // delete_last(head);
    
    // delete_specific_element(head , 15);

    // printll(head);




}