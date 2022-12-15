#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void traverse(struct Node * head){
    struct Node * ptr = head;
    do{
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }while(ptr != head);
}

// baaki sabh is almost same

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
    third -> next = head;

    traverse(head);

}