#include<stdio.h>
#define SIZE 4
int stack[SIZE];
int top=-1;

void push(int data)
{
	if(top==SIZE-1)
		printf("\nStack overflow, %d cannot be pushed",data);
	else
	{
		top++;
		stack[top]=data;
		printf("\n%d pushed to the stack",data);
	}
}

void pop()
{	int data;
	if(top==-1)
		printf("\nStack underflow, nothing to delete");
	else
	{	data=stack[top];
		stack[top]=0;
		top--;
		printf("\n%d deleted from stack",data);
	}
}

void peek()
{
	if(top==-1)
		printf("\nStack empty");
	else
		printf("\nStack[top]=%d",stack[top]);
}
int main()
{
	peek();
	push(10);
	push(20);
	push(30);
	push(40);
	peek();
	push(50);
	pop();
	pop();
	pop();
	pop();
	peek();
	pop();
	return 0;
}














