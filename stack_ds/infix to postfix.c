#include<stdio.h>
#define max 5
char infix[max],stack[max],postfix[max];
int ToS=-1;
int assoc(char op)
{
    if(op=='^')
        return 1;
    else
        return 2;
}
int prec(char op)
{
    if(op=='^')
        return 3;

    if(op=='*'||op=='/')
        return 2;

    return 1;
}
void push(int d)
{
	if(ToS==max-1)
	printf("Stack Overflow\n");
	else
	{
		ToS++;
		stack[ToS]=d;
	}
}
int pop()
{
	int d;
	if(ToS==-1) return -1;
	d=stack[ToS];
	ToS--;
	return d;
}
int peek()
{
	int d;
	if(ToS==-1)
        return -1;
	d=stack[ToS];
	return d;
}


int main()
{
    char live;
    int i=0,j=0;
    printf("enter a infix operation: ");
    gets(infix);
    printf("infix = %s\n",infix);
    for(i=0;infix[i]!='\0';i++)
    {
       live=infix[i];
       if(live>='a'&&live<='z'||live>='A'&&live<='Z')
       {
           postfix[j++]=live;
       }
       else if (live=='(')
       {
           push(live);
       }
       else if (live==')')
       {
           while (peek!='(')
           {
               postfix[j++]=pop();
           }
           pop();   //this will pop the '(' out of the stack
       }
       else if(peek()==-1 || peek=='(')
       {
           push(live);
       }
       else if (prec(live)>prec(peek()))
       {
           push(live);
       }
       else if (prec(live)<prec(peek()))
       {
           postfix[j++]=pop();
           i--;
           continue;
       }
       else if(assoc(live)==2)
       {
           postfix[j++]=pop();
           push(live);
       }
       else
       {
           push(live);
       }
       printf("infix = %s\n", infix);
       printf("stack = %s\n", stack);
       printf("postfix = %s\n",postfix);
    }
    while(ToS>=-1)
    {
        postfix[j++]=pop();
        ToS--;
        printf("infix = %s\n", infix);
        printf("stack = %s\n", stack);
        printf("postfix = %s\n",postfix);
    }
    printf("infix = %s\n", infix);
    printf("stack = %s\n", stack);
    printf("postfix = %s\n",postfix);
}
