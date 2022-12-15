#include <stdio.h>
int a[100];
int front = -1;
int rear = -1;
void enqueue( int val)
{
  if (rear == sizeof(a) - 1)
  {
    printf("Overflow\n");
  }
  else
  {
    if (front == -1)
    {
      front = 0;
      rear = 0;
    }
    else
    {
      rear++;
    }
    a[rear] = val;
  }
}
void dequeue()
{
  if (front == -1)
  {
    printf("Underflow\n");
  }
  else
  {
    printf("%d has been popped", a[front]);
    if (front + 1 == rear)
    {
      front = -1;
      rear = -1;
    }
    else
    {
      front++;
    }
  }
}
int main()
{
  int i = 1, j, choice;
  int val;
  while (i > 0)
  {
    printf("Enter choice \n 1.Insert \n 2.Delete \n 3.Peek \n 4.Exit \n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("Enter value\n");
      scanf("%d", &val);
      enqueue(val);
      break;
    case 2:
      dequeue();
      break;
    case 3:
      if (front == -1)
      {
        printf("Underflow\n");
      }
      else
      {
        j = front;
        while (j <= rear)
        {
          printf("%d\n", a[j]);
          j++;
        }
      }
      break;
    case 4:
      printf("exit");
      break;
    }
  }
  return 0;
}