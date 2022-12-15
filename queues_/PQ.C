#include<stdio.h>
#include<stdlib.h>
struct Node
{
  int data;
  int priority;
  struct Node *next;
};
struct Node *front;
struct Node *ptr;
struct Node *p;
void dequeue()
{
 printf("%d priority %d was popped\n",front->data,front->priority);
 front=front->next;
}
void enqueue()
{
     int val,pri;
     struct Node *new_node=(struct Node *)malloc(sizeof(struct Node));
     printf("Enter data and its priority\n");
     scanf("%d",&val);
     scanf("%d",&pri);
     new_node->priority=pri;
     new_node->data=val;
     if(front==NULL || pri<front->priority)
     {
       new_node->next=front;
       front=new_node;
     }
     else
     {
       ptr=front;
       while(ptr->next!=NULL && ptr->next->priority<=pri)
       {
      	ptr=ptr->next;
       }
       new_node->next=ptr->next;
       ptr->next=new_node;
     }
}
int main()
{
  int choice;
  int i=1;
  while(i>0)
  {
    printf("Enter your choice \n 1.Add\n 2.Pop\n 3.Peek \n 4. Exit \n");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1:
     enqueue();
     break;
     case 2:
     dequeue();
     break;
     case 3:
     p=front;
     if(front==NULL)
     {
      printf("Underflow\n");
     }
     else
     {
       while(p!=NULL)
      {
	printf("%d Pri %d \n",p->data,p->priority);
	p=p->next;
      }
     }
     break;
     case 4:
     exit(0);
    }
  }
  return(0);
}
