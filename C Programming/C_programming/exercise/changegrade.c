#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct sudentarray{
//	name is a pointer to an array of strings, so it's a char **.
  char ** name ;
  int * roll ;
  char * grade ;
}sg;
sg var;

void updategrade(sg * , int );

int main()
{
  sg * ptr=&var;
//	Here the name[0] not contain anything not even address we have to dynamicallu allocate 
  /*strcpy((ptr->name[0] ),"AkshayBaalaji");
  printf("The name is %p" ,var.name);*/
  ptr->name=(char **)malloc(10*sizeof(char));
  ptr->roll=(int *)calloc(6,sizeof(char));
  ptr->grade=(char *)calloc(6,sizeof(char));
  int size=10;
  for(int i=0;i<3;i++){
    ptr->name[i]=(char *)malloc(size*sizeof(char) );
    printf("Enter Name %d : ",i);
    scanf("%s",(ptr->name[i]));
    printf("Enter Roll no %d : ",i);
    scanf("%d",&ptr->roll[i]);
    printf("Enter grade %d : ",i);
    getchar();
    scanf("%c",&ptr->grade[i]);
    printf("\n");
  }
  printf("The students and rollno and marks are \n");
  for(int i=0;i<3;i++){
    printf("name [%d] = %s and roll no is %d grade scored is %c \n",i,ptr->name[i],ptr->roll[i],ptr->grade[i]);
  }
  printf("Enter the roll no for update grade \n");
  int rollno;
  scanf("%d",&rollno);
  updategrade(ptr,rollno);
  for(int i=0;i<3;i++){
    printf("name [%d] = %s and roll no is %d grade scored is %c \n",i,ptr->name[i],ptr->roll[i],ptr->grade[i]);
  }
  for (int i = 0; i < 3; i++) {
        free(ptr->name[i]); // free up the heap memory 
    }
    free(ptr->name);// free up the heap memory 
    free(ptr->roll);// free up the heap memory 
    free(ptr->grade);// free up the heap memory 

}
void updategrade(sg * p , int roll)
{
  int place;
  for(int i=0;i<3;i++){
    if(p->roll[i] == roll){
      place=i;
      break;
    }
  }
  printf("Enter a new grade \n");
  char ch;
  getchar();
  scanf("%c", &ch);
  p->grade[place]=ch;
}