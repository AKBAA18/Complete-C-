#include<stdio.h>
#include<string.h>

union A{
	int a;
	float b;
	char arr1[21];    
};

typedef union the_climate_is_good{
	int a;
	float b;
	char arr1[21];
}cli;//the new name of the union 
cli xx;//global variable 

void printunion(union A);
void printunionpoin(union A *);

int main()
{
	union A x;
	printf("The global variable address is &x %p\n", &x);
	printf("by global The size of the union is sizeof(x)%lu\n\n",sizeof(x));//max size of the union x is 21 but by 4 bytes it goes to 24  
	union A y;
	printf("The local varibale address is &y %p\n",&y);
	printf("by local variable The size of the union is sizeof(y)%lu\n",sizeof(y));
	printf("\n");
        printf("Now we are printting the address of the union elements by local variable \n");
        printf("The address of element 1 sizeof(y.a):%p\n",&(y.a));
        printf("The address of element 2 sizeof(y.b):%p\n",&(y.b));
        printf("The address of element 3 sizeof(y.arr1):%p\n",&(y.arr1));
	printf("\n");
	printf("\n");
        printf("Now we are printting the address of the union elements by global variable \n");
        printf("The address of element 1 sizeof(x.a):%p\n",&(x.a));
        printf("The address of element 2 sizeof(x.b):%p\n",&(x.b));
        printf("The address of element 3 sizeof(x.arr1):%p\n",&(x.arr1));
	printf("\n\n");
	
	cli var;//points to different union 
	printf("The local varibale craeted of type cli address is &y %p\n",&var);
	printf("by local variable created of type cli The size of the union is sizeof(var)%lu\n",sizeof(var));
	printf("\n");
	printf("Now we are printting the address of the union elements \n");
	printf("The address of element 1 sizeof(var.a):%p\n",&(var.a));
	printf("The address of element 2 sizeof(var.b):%p\n",&(var.b));
	printf("The address of element 3 sizeof(var.arr1):%p\n",&(var.arr1));
	
	printf("\n");
	printunion(y);
	printf("\n");
	printunionpoin(&x);
        //printf("The book id is %d and the price of it %f and the book name is %s\n",y.a,y.b,y.arr1);

	return 0;
}
void printunion(union A y){ //call by value method this is memory consuming 
	printf("Now we are printing the value of the union elements by another union\n");
	y.a=1;
	printf("The book id is %d ",y.a);
	y.b=50.23;
	printf("The book price is %f ",y.b);
	char arr[]="Book 1";
	strcpy(y.arr1,arr);
	printf("The string is %s ",y.arr1);
	//printf("The book id is %d and the proce of it %f and the book name is %s\n",y.a,y.b,y.arr1);
	printf("\n");
}
void printunionpoin(union A * y){ //call by reference  
	printf("Now we are printing the value of the union elements by pointer\n");
	y->a=1;
	printf("The book id is %d ",y->a);
	y->b=50.23;
	printf("The book price is %f ",y->b);
	char arr[]="Book 1";
	strcpy(y->arr1,arr);
	printf("The string is %s ",y->arr1);
	//printf("The book id is %d and the proce of it %f and the book name is %s\n",y->a,y->b,y->arr1);
	printf("\n");
}
/*
void assignvalbypoin(union A * y){
	y->a=1;
        y->b=50.23;
        char arr[]="Book 1";
        strcpy(y->arr1,arr);
}*/
