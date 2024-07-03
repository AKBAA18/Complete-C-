#include<stdio.h>

int main(){
	int a;
	printf("Enter the number to find fibonocii till or upto \n");
	scanf("%d",&a);
	int x,y,z;
	x=0,y=1,z=0;
	printf("0 1 ");
//	printf("%d %d %d ",x,y,z);	TO check how comma operator works 
//	Here we are finding the fibo till n 
	for(int i=0;i<a-2;i++){
		z=x+y;
		printf("%d " , z);
		x=y;
		y=z;
	}	
// 	Here we are finding the fibo of first n number
	printf("\n");
	x=0,y=1,z=0;
	int temp;
	printf("0 1 ");
	for(int i=0,till=0;(i<1000) ^ (!((a-till)>=till));i++){ //(20-0)>=0 , (20-1)>=1 , (20-2)>=2 , (20-8) >=8 , (20-13 >=13)
		z=x+y;
		till=z;
		printf("%d " , z);
		x=y;
		y=z;
	}
	
}