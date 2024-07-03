#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *ptr;
};

void printll(struct node *head);

int main()
{
	int count=0;
	struct node *check;
	struct node * node1 = (struct node * )malloc (sizeof(struct node));
	printf("The size of struct node is %lu",sizeof(node1));
	printf("\nNow we are going to enter the value of data \n");
	node1->data=10;
	node1->ptr=NULL;
	check=node1;//best way to use beacuse if we update and delete the record in linkedlist it is difficult to maintain

	++count;

	printf("Now we are creating another struct pointer \n");
	struct node * node2= (struct node * )malloc(sizeof(struct node));
	node2->data=20;
	node2->ptr=NULL;
	node1->ptr=node2;
	++count;

	printf("Now we are creating another struct pointer \n");
        struct node * node3= (struct node * )malloc(sizeof(struct node));
        node3->data=30;
        node3->ptr=NULL;
        node2->ptr=node3;
	++count;

	check=node1;
	while(check!=NULL)
        {
                printf("data =%d and the address it hold is %p its own address is %p\n", check->data , check->ptr , &(check->ptr));
                check=check->ptr;
        }	
	printf("\n");
	printf("Now we are creating another struct pointer for inserting at begining \n");
        struct node * node0= (struct node * )malloc(sizeof(struct node));
        node0->data=5;
	check=node1;//in prev iteration we have moved to last element 
        //node0->ptr=node1->ptr;//here i have used node1 ptr so the node 1 will be deleted 
        node0->ptr=check;//if we use node 1 it will work even 
	check=node0;


	printf("\nprinting the structure in function ");
	printll(check);	



	return 0;
}

void printll(struct node *head)
{
	printf("\n");
	while(head!=NULL)
        {
                printf("data =%d and the address it hold is %p its own address is %p\n", head->data , head->ptr , &(head->ptr));
                head=head->ptr;
        }
}
