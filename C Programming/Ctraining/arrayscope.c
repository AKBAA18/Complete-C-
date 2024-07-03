#include<stdio.h>

int b[10];

int main() 
{
	int a[10];
	printf("The a is the array each element of type integer \n");
	printf("The size of array is %lu" , sizeof(a) );
	printf("\n");
	/*
	for (int i=0;i<sizeof(a);i++) {
		printf("The element %d and the  value is %d :\n",i ,a[i]);
	}*/
	for (int i=0;i<10;i++) {
		printf("The element %d and the  local array value is : %d \n",i ,a[i]);
	}
	for (int i=0;i<10;i++) {
		printf("The element %d and the  value of global array is : %d\n",i ,b[i]);
	}
	printf("Now we are going to print the address of array element to show it is continuous : \n" );
	for (int i=0;i<10;i++) {
		printf("The element %d and the address of array is : %p \n",i ,&b[i]);
	}


	
	return 0;
}
	

