#include<stdio.h>
#include<stdlib.h>

typedef struct carrentalsys{
  int * index; 
  char ** make;
  char ** model;
  int * rentalprice;
  int * avail;
}car ;
car glo;

void printfunc(car *p );
void rentfunc(car *p,int);
void returnfunc(car * p, int );

int main()
{
  car * var=&glo;
  var->index=(int *)malloc (10*sizeof(int));
  var->make=(char **)malloc (10*sizeof(char));//here the memory allocated is only 10 bytes 
  var->model=(char **)malloc (10*sizeof(char));//here the memory allocated is only 10 bytes 
  var->rentalprice=(int *)malloc (10*sizeof(int));//here the memory alloc is 40 bytes 
  var->avail=(int *)malloc (10*sizeof(int));
  int ind;

  for(int i=0;i<4;i++)
    {
      var->index[i]=0;
      printf("Enter the make of the car: ");
      var->make[i]=(char *)malloc(10*sizeof(char));
      scanf("%s",   (var->make[i]));
      printf("Enter the model of the car: ");
      var->model[i]=(char *)malloc(10*sizeof(char));
      scanf("%s",   (var->model[i]));
      printf("Enter the rental price of the car: ");
      scanf("%d", &(var->rentalprice[i]));
      printf("Enter the availability of the car: ");
      scanf("%d",&(var->avail[i]));
      printf("\n");
    }
  int choice=1;
  while(choice!=0){
    printf("Enter your choice 1 for return , 2 for rent , 3 for list avail cars  , 4 for exit ");
    
    scanf("%d", &choice);
    switch(choice)
      {
        case 3:
          printfunc(var);
          break;
        case 2:
          printf("Enter a car index to rent \n");
          scanf("%d", &ind);
          rentfunc(var,ind);
          break;
        case 1:
          printf("Enter a car index to return \n");
          scanf("%d", &ind);
          returnfunc(var, ind);
          break;
        default:
          printf("Enter a valid choice BYe  \n");
          break;
      }
    if(choice==4)
    {
      break;
    }
  }

  

}
void printfunc(car * p)
{
  printf("Make     Model       Rental price     Availability\n");
  for(int i=0;i<4;i++)
    { 
      printf("%s     %s        %d             %d ", p->make[i],p->model[i],p->rentalprice[i], p->avail[i]);
      printf("\n");
    }
}

void rentfunc(car * p, int no)
{
    for(int i=no;i<=no;i++)
      {
        if(p->avail[i]>0)
        {
          p->avail[i]=p->avail[i]-1;
        }
        else{
          printf("Car is not available");
        }
      }
}
void returnfunc(car * p, int no)
{
    for(int i=no;i<=no;i++)
      {
          p->avail[i]=p->avail[i]+1;
     }
}