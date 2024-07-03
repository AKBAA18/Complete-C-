#include<stdio.h>

int *poin;//even the pointer variable value depend on scope 
int var;//
int main() 
{
	poin=&var;
	printf("Here percentage d is used for printing the value of the global variable %d\n", var);
	printf("Here percantage p is used for printing the address of the global variable %p\n", &var);
	printf("Here percantage d is used for printing the value of the global pointer variable %d\n", *poin);
	printf("Here percantage p is used for printing the address hold by the global pointer variable %p\n", poin);
	printf("Here percentage p is used for printing the address of the global pointer variable %p\n", &poin);
	printf("\n");
	
	printf("We are going to change the pointer value \n");
	*poin=45;
	printf("The value of global variable changed by the pointer variable %d\n", var);
	printf("Here percantage p is used for printing the address of the global variable %p\n", &var);
	printf("Here percantage d is used for printing the value of the global pointer variable %d\n", *poin);
	printf("Here percentage p is used for printing the address of the global pointer variable %p\n", &poin);
	printf("Here percantage p is used for printing the address hold by the global pointer variable %p\n", poin);
	printf("\n");
	
	printf("Now we are going to work on sizeof pointers \n");
	printf("The sizeof the global variable is %lu\n",sizeof(var));
	printf("The sizeof the global pointer variable is %lu\n",sizeof(poin));
	printf("\n");

	printf("Now we are incrementing the pointer variable \n");
	poin+=1;
	printf("The new address hold by the global pointer variable is %p\n" , poin);
	printf("The address of global variable is %p\n" , &var);
	printf("NOw we are checking the address of global pointer variable %p\n", &poin);
	printf("Now we are printing the value of global pointer variable  %d\n", *poin);
	printf("Here percantage p is used for printing the address hold by the global pointer variable %p\n", poin);
	printf("\n");

	int **q;// Warning if we create int *q; // beacause it points to another pointer ;
	q=&poin;
	printf("The address hold by the local pointer variable is %p\n" , q);
	printf("The address of local pointer variable %p\n", &q);
	printf("Now we are printing the value of value of pointer variable  %p\n", *q);
	printf("Now we are printing the value of global pointer variable  %d\n",**q); // it prints 0 beacause we have changes the value of p by adding 1 with it 
	printf("NOw we are printing the address hold by local pointer variable  %p\n", q);
	




	return 0;

}
