#include<stdio.h>
#include<stdlib.h>

struct queue {
    int size;
    int front ;
    int rear;
    int *ptr ;
};

void enqueue(struct queue * q);
void printt(struct queue *);
void dequeue(struct queue * q);

int main()
{
    struct queue que;
    que.size=5;
    que.front=-1;
    que.rear=-1;
    que.ptr=(int *) malloc (que.size*sizeof(int));
  for(;;)
    {
      printf("Enter the choice 1 for enqueue 2 for dequeue and 3 for print \n");
      int choice ;
      scanf("%d",&choice);
      switch (choice)
        {
          case 1:
            enqueue(&que);
            break;
          case 2:
            dequeue(&que);
            break;
          case 3 :
            printt(&que);
            break;
          default:
            printf("Enter the correct choice \n");
            break;
          
        }
      if(choice==4)
      {
        break;
      }
    }
    
    


   return 0;  
}
void enqueue(struct queue * q)
{
    int element;
    printf("Enter the element to be inserted: ");
    scanf("%d",&element);
    
    for(int i=q->rear;i<=q->rear;)
      {
        if(q->rear==-1 && q->front==-1)
        {
            q->front=q->front+1;
            q->rear=q->rear+1;
            q->ptr[q->rear]=element;
            break;
        }
        else if(q->rear>=0 && (q->rear<(q->size-1))){
            q->rear=q->rear+1;
            q->ptr[q->rear]=element;
            break;
        }
        else{
            printf("Queue is full\n");
            break;
        }
      }
}
void printt(struct queue * q)
{
  for(int  i = 0;i<=q->rear;i++)
  {
    printf("arr[%d] = %d \n" ,i+1 , q->ptr[i]);
  }

}
void dequeue(struct queue * q)
{
    if(q->front>q->size-1)
      {
        printf("Queue is empty \n");
      }
      else if (q->front ==-1 )
      {
          printf("queue is empty \n");
      }
    else{
      q->ptr[q->front]=0;
      q->front=q->front+1;
    }
}
