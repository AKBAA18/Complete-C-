#include <stdio.h>
#include<string.h>

int main()

{
    printf("Hello World");
    printf("\n");
    char arr[]="Akshay";
    char arr1[]="Baalaji";
    printf("Before :%s\n",arr);
    strcat(arr,arr1);
    printf("After :%s\n",arr);
    printf("The new length is strlen(arr) : %lu\n",strlen(arr));
    char a='A';//65
    char b='a';//97
    int result =strcmp(&a,&b);
    if(result==0){
        printf("Both the char are same \n");
    }
    else if(result>=0){
        printf("The char 1 %c has greater ascii than %c \n", a,b);
    }
    else{
        printf("The char 2 %c has greater ascii than %c \n", b,a);
    }

    return 0;
}
