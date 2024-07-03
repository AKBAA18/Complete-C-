#include<stdio.h>

void asciival(char *,int );


int main()
{
	char arr[]={'H','e','l','l','o'};
	char arr1[]="Hello";
	printf("The size of the array is %lu\n", sizeof(arr));
	printf("The size of the string is %lu\n", sizeof(arr1));
	printf("The address is printed by indexing");
	for(int i=0;i<sizeof(arr);i++){
		printf("arr[%d] = %c and the address is %p\n",i,arr[i],&arr[i]);
	}
	printf("\n");
	printf("Now we are printing the string the last char will be \\0  \n");
	for(int i=0;i<sizeof(arr1);i++){
		printf("arr1[%d] = %c and address is %p\n",i,arr1[i],&arr1[i]);
	}
	printf("\n");
	
	int size=sizeof(arr);
	int size1=sizeof(arr1);
	asciival(arr,size);
	asciival(arr1,size1);
	printf("\n");

	printf("The address of the array is printed by pointer \n");
	addressbypointerincrement(arr,size);
	printf("The address of the array1 is printed by pointer \n");
	addressbypointerindex(arr1,size1);


	return 0;
}

void asciival(char *p,int size)
{
	printf("Enetred to the function for printing ascii char of element \n");
	for(int i=0;i<size;i++){
		printf("a[%d] = %c and the ascii value is %d",i,p[i],p[i]);
		printf("\n");
	}
}
void addressbypointerincrement(char *p,int size)
{
	printf("This is in function where address is printed by pointer incrementing \n");
	for(int i=0;i<size;i++){
		printf("&arr[%d] = %p\n", i, p);
		p++;
	}	
}
void addressbypointerindex(char *p,int size)
{
	printf("This is in function where address is printed by pointer indexing method  \n");
	for(int i=0;i<size;i++){
		printf("&arr1[%d] = %p\n", i, &p[i]);
	}	
	
}
