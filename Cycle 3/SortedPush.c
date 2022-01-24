#include<stdio.h>
#define STACKSIZE 100
int stack[STACKSIZE],Astack[STACKSIZE];
int top1=-1,top2=-1;
int n;

void push(int item)
{
	if(top1>n-1)
	printf("Stack Overflow\n");
	else
	stack[++top1]=item;
}

int pop()
{
	if(top1==-1)
	printf("Stack empty\n");
	else
	return stack[top1--];
}


void main()
{
	int elt,item;
	printf("Enter no. of elements you want in stack: ");
	scanf("%d",&n);
	
	while(top1<n-1)
	{
		printf("Enter the element you want to push: ");
		scanf("%d",&item);
		push(item);
	}
	
	while(top1>-1)
	{
	elt=pop();
	if(elt<Astack[top2])
	{
	top1--;
	while(top2!=-1)
	{
	push(Astack[top2--]);
	}
	push(elt);
	}
	else
	{
	Astack[++top2]=elt;
	top1--;
	}
	}
	printf("The sorted stack is: ");
	for(int i=top2;i>-1;i--)
	printf("%d\n",Astack[i]);
}
