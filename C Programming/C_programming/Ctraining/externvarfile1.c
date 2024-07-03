#include<stdio.h>

extern int i;

void func(){
	printf("The value of global var in file 1 is printed in file 2 by extern keyword %d\n ",i);
}
