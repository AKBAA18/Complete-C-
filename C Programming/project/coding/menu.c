#include<stdio.h>
void insert(int a);
int delete();
void display();
int main(){
	for(;;){
		int choice;
		printf("Enter the choice 1.insert 2.delete 3.display 4.exit \n");
		scanf("%d" , &choice);
		switch(choice){
			case 1:
				printf("Enter a input for insertiion \n");
				int val;
				scanf("%d",&val);
				insert(val);
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Program terminated ");
				break;
		}
		if(choice ==4){
			break;
		}

	}
}
