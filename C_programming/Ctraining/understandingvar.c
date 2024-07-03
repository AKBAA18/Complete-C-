#include<stdio.h>

int count ; // Global variable 

//entry function 
void entry(){
	count++;
}
//exit function 
void exit(){
	count--;
}



int main(){
	for(;;){
		printf("\nEnter 1 for entry and 2 for exit and 3 for displaying the entry done:");
		int n;
		scanf("%d",&n);
		switch(n)
		{
			case 1: 
				entry();
				break;
			case 2:
				exit();
				break;
			default :
				printf("Bye \n");
				printf("Number of user visited is %d\n",count);
				break;
		}
		if(n==3){
		break;
		}	
	}
}
