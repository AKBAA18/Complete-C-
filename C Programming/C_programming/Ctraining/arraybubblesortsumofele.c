#include<stdio.h>
#include<stdlib.h>

int sumofele(int *,int );
void bubblesort(int *, int);

int main()
{
	printf("Enter the size of array \n");
	int n;
	scanf("%d", &n);
	int *arr=(int *)calloc(n,sizeof(int));//malloc of 20 gives 20 bytes to the integer pointer 
	int sizee=sizeof(arr);
	printf("The size of the array where malloc alolocated is %lu\n", sizeof(arr));
	for(int i=0;i<n;i++){
      printf("Enter the mark %d ",i+1);
      scanf("%d",&arr[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++){
	   printf("The elements are arr[%d] = %d and the address %p and the address it hold %p\n",i,arr[i],&arr[i],arr[i]);
	}
	int sum=sumofele(arr,n);
	printf("The sum of all elements is %d\n", sum);
	bubblesort(arr,n);
	printf("The highest value is %d\n",arr[n-1]);
	printf("\n");
	printf("The smallest value is %d\n",arr[0]);
	
	
	return 0;
}
int sumofele(int *q, int len)
{
	int sum=0;
	for(int i=0;i<len;i++){
	    sum=sum+q[i];
    }
    return (sum);
}
void bubblesort(int *p,int size)
{	
	int temp=0;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(p[j]>p[j+1]){
                    temp=p[j];
                    p[j]=p[j+1];
                    p[j+1]=temp;
            }
        }
    }
}
