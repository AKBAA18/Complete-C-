#include<stdio.h>

int main()
{
	int a=100;
	char c='a';

	printf("The size of the variable is %lu\n",sizeof(a));//We use lu here beacause sizeof return unsigned and it is not signed  
	printf("The size of longdouble is %lu\n",sizeof(long double));//We use lu here beacause sizeof return unsigned and it is not signed  
	printf("The size of constant is %lu\n",sizeof(10));//THe size of 10 will be also 4 beacause it is of type integer
	unsigned long int i=0x3242343243;
    	unsigned int j=0xA;
	printf("The size of unsigned long int is %lu\n",sizeof(i));  
	printf("The size of unsigned int is %lu\n",sizeof(i));//This may get waring as we used lu instead of du   
	printf("The value of i %lx and value of j is %d and it is in form of int instead of hexa decimal  \n" , i,j);
	return 0;
}
	
