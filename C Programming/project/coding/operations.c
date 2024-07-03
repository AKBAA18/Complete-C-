#include<stdio.h>
int ins=0;
int del=0;
int arr[5];
/*
 
 */
void insert(int a){
	if(ins>5 && del==0){
		//the array is full
		printf("Array is full \n"); 
	}
	else {
		if(ins==4 && del!=0) {
			for(int i=0;i<del;i++){
				if(arr[i]==0){
					ins=0;
					arr[ins]=a;
					ins++;
				}
			}
		}	
		else{
			arr[ins]=a;
			if(ins==4){
				ins=0;
			}
			else{
				ins++;	
			}
		}
	}
		
printf("\n");
}
int delete(){
	if(del>=4){
		del=0;
		arr[del]=0;
		del++;

	}
	
	else if(del == ins ) {
		if(arr[del]!=0){
			{

				arr[del]=0;
				del++;
			}
		}
	}
	else{
		arr[del]=0;
		del++;
	}
printf("\n");
}
void display(){
//	if(del == ins ){
	//	break;
//	}
//	else{
		printf("Q=");
		for(int i=0;i<=4;i++){
			printf("%d ", arr[i]);
		}
//	}
printf("\n");
}
