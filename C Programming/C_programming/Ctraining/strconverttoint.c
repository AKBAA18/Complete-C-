//We cant do a str compare in switch staement 
//because switch can only take int as argument  

#include<stdio.h>
#include<string.h>

int  main()
{
	char arr[100];
	printf("Enter a number from 1-10 in small letter ");
	scanf("%s" , arr);
	int result =0;
	if(strcmp(&arr,"zero")==0){
		result=0;
	}
    	if(strcmp(&arr,"one")==0){
                result=1;
        }
        if(strcmp(&arr,"two")==0){
                result=2;
        }   
        if(strcmp(&arr,"three")==0){
                result=3;
        }   
        if(strcmp(&arr,"four")==0){
                result=4;
        }   
        if(strcmp(&arr,"five")==0){
                result=5;
        }   
        if(strcmp(&arr,"six")==0){
                result=6;
        }   
        if(strcmp(&arr,"seven")==0){
                result=7;
        }   
	 if(strcmp(&arr,"eight")==0){
                result=8;
        }
        if(strcmp(&arr,"nine")==0){
                result=9;
        }   
        if(strcmp(&arr,"ten")==0){
                result=10;
        }  
        printf("\n");	
	printf("The number is %d\n", result);

}
