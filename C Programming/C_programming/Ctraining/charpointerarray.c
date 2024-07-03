#include<stdio.h>

int main()
{
	char arr[]="ABC";
	char arr1[]="BCD";
	char arr2[]="CDE";
	char *p=arr;
	char *p1=arr1;
	char *p2=arr2;
	printf("Now we are printing the array by the char pointer array \n");
	char * tot[]={p,p1,p2};
	int size=sizeof(tot);
	for(int i=0;i<size;i++){
		printf("tot[%d] = %s and the address is %p\n",i,tot[i], &tot[i]);
	}
}

	
