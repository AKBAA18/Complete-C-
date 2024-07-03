#include<stdio.h>

int function(int , int ,int );

int main()
{
	printf("Enter the date \n");
	int date;
	scanf("%d", &date);
	printf("Enter the month \n");
	int month;
	scanf("%d", &month);
	printf("Enter the year \n");
	int year;
	scanf("%d", &year);
	printf("Your entered %d/%d/%d\n",date,month,year);
	printf("\n");
	int result=function(date,month,year);
	if(result==1)
	{
		printf("Valid");
		
	}
	else{
		printf("INvalid ");
	}
	
	
}
int function(int d,int m,int year ){
	if(d <=31 && (m ==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) )
	{
		return 1 ;
	}
	else if (d <=30 && (m ==4 || m==6 || m==9 || m==11 )) {
		return 1 ;
	}
	else if(d==29 && (m==2) ){
		 if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		 {
		 	return 1 ;
		 }
		 else {
		 	return 0;
		 }
	}
	else{
		return 0;
	}
}