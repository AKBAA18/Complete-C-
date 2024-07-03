#include<stdio.h>
int main()
{
	printf("size of 1234 is %lu\n" , sizeof(1234));
	printf("size of 12.4f is %lu\n" , sizeof(12.34f));
	printf("size of 1234u is %lu\n" , sizeof(1234u));
	printf("size of 1234ul is %lu\n" , sizeof(1234ul));
	printf("size of 12.34l is %lu\n" , sizeof(12.34l));
	//printf("size of 1234F is %lu\n" , sizeof(12F)); THis creates the error because 1234 is integer 
	printf("size of 12.0f is %lu\n" , sizeof(12.0f));
	printf("size of 12.f is %lu\n" , sizeof(12.f));
	//printf("size of 12.34u %lu\n" ,sizeof(12.34u));This creates error because float is always signed 
	printf("The size of \"as\" is %lu\n " , sizeof("as"));
	printf("The size of \"a\" is %lu\n " , sizeof("a"));
	printf("The size of \"a\" is %lu\n " , sizeof("a"));
	printf("The size of \'\\0\' is %lu\n " , sizeof('\0'));
	printf("The size of \'\' is %lu\n " , sizeof('0'));
	printf("The size of \"\" is %lu\n " , sizeof(""));
	if (0 == '\0'){
		printf("The 0 and \"\\0\" are same \n ");
	}
	else{
		printf("The 0 and \"\\0\" are different \n");

	}

	enum {x,y,z};
	printf("THe enumeration 1 value is %d %d %d \n" ,x,y,z );
	enum {a,b=10,c};
	//enum {d,e=20.5,f}; This creates the error because it is of type enum 
	//int a=100;
	//enum {d,e=a,f};This creates error because the var executed on run time and enum executed on compile time
	#define l 43 //This get executed in preprocessor stage 
	enum {g,h=l,i};//THis get executed because the enumeration get executed on compile and define get exedcuted on preprocessor 
	printf("THe enumeration 2 value is %d %d %d \n" ,a,b,c );
	printf("THe enumeration 3 value is %d %d %d \n" ,g,h,i );
	return 0;
}
