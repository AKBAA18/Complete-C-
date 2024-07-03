#include<stdio.h>
#include<stdlib.h>

int * maxfunc(int *);
void bubblesort(int [], int);

int main()
{
	int n=4;
	int *arr=(int *)calloc(n,sizeof(int));//malloc of 20 gives 20 bytes to the integer pointer 
	int sizee=sizeof(arr);
	printf("The size of the array where malloc alolocated is %lu\n", sizeof(arr));
	for(int i=0;i<n;i++){
		printf("Enter the mark %d ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++){
		printf("The elements are arr[%d] = %d and the address is %p and the address it hold %p\n",i,arr[i],&arr[i],arr[i]);
	}
	int *q=maxfunc(arr);		
	printf("The highest value is %d\n",*q);
	printf("\n");
	int arrr[]={1,45,23,54,76,78,986,7,45,3423,23};
	int len=11;
	bubblesort(arrr,len);
//	charbubblesort();


	return 0;
}
int * maxfunc(int *q)
{
	printf("Entered into the function \n");
	int *p=q;
	int max;
	max=*q;
	for(int i=0;i<4;i++){
		if(max>=*q){
				
		}
		else{
			max=*q;
			p=q;
		}
		q++;
	}
	return (p);
}
void bubblesort(int arr[],int size)
{
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("The sorted array is below \n");
	for(int i=0;i<size;i++){
		printf("a[%d] = %d \n", i, arr[i]);
	}
}
