#include<stdio.h>

void array(int *q);
void inputarr(int *,int );

int main(){
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int size=sizeof(a)/sizeof(a[0]);
	printf("The size of the array is %d\n",size);
	printf("\n");

	printf("For understanding the address of the array and elements \n");
	printf("The address of the array is same as the first element in array %p\n",a);
	for(int i=0;i<size;i++){
		printf("a[%d] : %p\n",i, &a[i]);
	}
	
	printf("\n");
	printf("Here we are using the local pointer to change value of array ");
	int *p=a;
	printf("The pointer p hold value of %p\n",p);
	printf("the address of the pointer is %p\n",&p);
	printf("The value after dereferencing *p is %d\n",*p);	
	printf("\n");

	printf("NOw we are going to change the value of array by pointer \n");
	printf("Now we are dereferencing the first pointer and changing it to 23 . Before the change the value is %d\n",*p);
	*p=23;//make the a[0] to 23 
	printf("After the change the value is %d\nThen we are doing the addition in dereferencing *p=*p+1 \n",*p);
	*p=*p+1;//make the a[0] to 24
	printf("After the change the value is %d\n",*p);
	printf("\n");

	printf("Now we are changing the pointer value by 1 by doing *p++ \nBefore change the address hold by the pointer :%p\n",p);
	*p++;//here the address of the pointer changed to next this points to a[1] same as p++
	printf("THis points to next array element as it is in sequence :%p\n",p);
	printf("If we change the value of array by derenrencing the 2 element in array changed by dereferencing\n ");
	printf("The value of 2 nd element before change is %d\n",*p);
	*p=65;//make the a[1] to 65
	printf("After the change the value is %d\nThen we are doing the addition in dereferencing *p=*p+1 \n",*p);
	*p=*p+1;//make the a[0] to 66
	printf("After the change the 2nd value is %d\n",*p);
	printf("\n");
	
	printf("Now we are going to change the value of array by function \n");
	array(a);	
	printf("\n");

	printf("Now we are going to get input of size and assign it to value by pointer in another function \n");
	int size1;
	printf("Enter the size of array : ");
	scanf("%d", &size1);
	int a1[size1];
	inputarr(a1, size1);
	for(int i=0;i<size1;i++){
		printf("a[%d] = %d and address is %p\n",i, a1[i],&a1[i]);
	}
	
	printf("\n");
	

	return 0;
}

void array(int *q)
{	
	q[8]=32;//here we areaccessing [8] element which gives the value we cant dereference the value so we cant use *q[8];  
	printf("%d\n", q[8]);
}

void inputarr(int *q , int size) //address increment 
{
	printf("Now we are in function to get input for array elements\n");
	int temp;
	for(int i=0;i<size;i++){
		printf("%d element is  : ",i);
		scanf("%d", q);//scanf requires address q is already a address now the ip is passed and stored to that address 
		printf("\n");
		q++;//here we are incrementing the address 
	}
}

	

