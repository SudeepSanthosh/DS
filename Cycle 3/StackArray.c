#include<stdio.h>
#define STACKSIZE 100
int stack[STACKSIZE];
int top=-1;

void push(int item)
{
	if(top>=STACKSIZE-1)
	printf("Stack overflow!\n");
	else
	stack[++top]=item;
}

int pop()
{
	if(top==-1)
	return -1;
	else
	return stack[top--];
}

void print()
{
	int i;
	printf("The stack is:\n");
	for(i=top;i>-1;i--)
	printf("%d\n",stack[i]);
}

void main()
{
	int ch,item,elt,flag=1;
	while(flag==1)
	{
	printf("Menu:\n1.Push element\n2.Pop element\n3.Display stack\n4.Exit\n");
	printf("Enter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1: printf("Enter the element to be pushed into stack: ");
					scanf("%d",&item);
					push(item);
					break;
	
	case 2:	elt=pop();
					printf("Element popped is: %d\n",elt);
					break;

	case 3:	print();
					break;
	
	case 4: flag=0;
					break;
	}
	}
}
