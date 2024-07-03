#include<stdio.h>
int x=1000;
int a=100;
void printt(){
        printf("This is the value of local variable %d\n" , a);
}
int main()
{
	int a; // local variable 
	printf("This is the local variable %d\n" , a);
	int x=9430;
	printf("The glocal variable overwritten by local variable %d\n",x);
	printt();
	extention();
}
