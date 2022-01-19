#include<stdio.h>
#define STACKSIZE 100
int stack[STACKSIZE];
int top1=-1,top2=STACKSIZE;

void push(int i,int item)
{
	if(top2==top1-1)
	printf("Stack Overflow\n");
	else if(i==1)
	stack[++top1]=item;
	else
	stack[--top2]=item;
}

int pop(int i)
{
	if(top1==-1||top2==STACKSIZE)
	printf("Stack is empty\n");
	else if(i==1)
	return stack[top1--];
	else
	return stack[top2++];
}

void print1()
{
	int i;
	printf("The stack is:\n");
	for(i=top1;i>-1;i--)
	printf("%d\n",stack[i]);
}

void print2()
{
	int i;
	printf("The stack is:\n");
	for(i=top2;i<STACKSIZE;i++)
	printf("%d\n",stack[i]);
}


void main()
{
	int i,item,ch,elt,flag=1;
	while(flag==1)
	{
	printf("Menu:\n1.Push element into stack 1\n2.Pop element from stack 1\n3.Push element into stack 2\n4.Pop element from stack 2\n5.Display stack 1\n6.Display stack 2\n7.Exit\n");
	printf("Enter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1: printf("Enter element to push: ");
					scanf("%d",&item);
					break;
	case 2: elt=pop(1);
					printf("Element popped is: %d\n",elt);
					break;
	case 3: printf("Enter element to push: ");
					scanf("%d",&item);
					break;
	case 4: elt=pop(2);
					printf("Element popped is: %d\n",elt);
					break;
	case 5:	print1();
					break;
	case 6: print2();
					break;
	case 7: flag=0;
					break;
	}
	}
}
