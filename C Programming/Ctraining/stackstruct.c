#include<stdio.h>
#include<stdlib.h>

struct stack {
  int top;
  int size;
  int * ptr;
}; 
void isfull(struct stack * );

int main()
{
  struct stack ticket;
  ticket.top=-1;
  ticket.size=5;
  ticket.ptr=(int *)malloc(ticket.size*(sizeof(int)));
  isfull(&ticket);

}
void isfull(struct stack *p)
{
	if(p->top ==-1 )
	{
		printf("Stack is empty \n");
	}
}
