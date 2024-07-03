#include<stdio.h>
#include<stdlib.h>

struct stack {
  int top;
  int size;
  int * ptr;
}; 
void insert(struct stack * );

int main()
{
  struct stack ticket;
  ticket.top=-1;
  ticket.size=5;
  ticket.ptr=(int *)malloc(ticket.size*(sizeof(int)));
  insert(&ticket);
  for(int i=0;i<5;i++)
  {
	  printf("a[%d] %d and the top is %d\n",i+1,ticket.ptr[i] , ticket.top );

  }
}
void insert(struct stack *p)
{
	if(p->top >=-1 && p->top<=5)
	{
		p->ptr[0]=25;
		p->top=p->top+1;
		
	}
}
