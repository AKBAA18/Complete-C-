#include<stdio.h>
#include<stdlib.h>

int main()
{
	char a='A';
	void *ptr;
	ptr=&a;
	printf("The address of the pointer is: %p \n",ptr);
	printf("INorder to print the pointer value *ptr we will use \nbut its type is void so we type cast to char *(char * )ptr : %c\n", *(char *)ptr);
	int aa=123;
	void *p;
	p=&aa;
	printf("Now we are printing the value of the void pointer 2 \nBy doing type cast  *(int * )p :  %d\n", *(int *)p);
	char arr[]="Akshaya Baalaji";
	ptr=&arr;
	printf("Now we are printing the value of the void pointer 1 and assigned to array  \nBy doing type cast  *(char * )p :  %s\n", (char *)ptr);




}

