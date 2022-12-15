#include<stdio.h>
#include<stdlib.h>
int a[5];
int front=-1;
int rear=-1;
int max=6;
void push(int data)
{
  if((rear+1)%max==front)
  {
    printf("Overflow\n");
  }
  else
  {
    if(front==-1)
    {
      front=0;
      rear=0;
    }
    else
    {
      rear=(rear+1)%max;
    }
    a[rear]=data;
  }
}
void pop()
{
  if(front==-1)
  {
    printf("Underflow\n");
  }
  else
  {
    printf("%d was popped",a[front]);
    if(front==rear)
    {
      front=-1;
      rear=-1;
    }
    else
    {
      front=(front+1)%max;
    }
  }
}
void peek()
{
  int ptr=front;
  while(ptr!=rear)
  {
    printf("%d\n",a[ptr]);
    ptr=(ptr+1)%max;
  }
  printf("%d\n",a[rear]);
}
int main()
{
  int i=1,choice,val;
  // clrscr();
  while(i>0)
  {
  printf("Do you want to \n 1. Insert \n 2. Pop \n 3. Peek \n 4. Exit\n");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
    printf("Enter element\n");
    scanf("%d",&val);
    push(val);
    break;
    case 2:
    pop();
    break;
    case 3:
    peek();
    break;
    case 4:
    exit(0);
  }
  }
  return 0;
}