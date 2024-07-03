/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java,
PHP, Ruby, Perl, C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C,
Assembly, HTML, CSS, JS, SQLite, Prolog. Code, Compile, Run and Debug online
from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct A {
  int data;
  struct A *next ;
  struct A *prev ;
} A;

A* swap_linkedlist(A *);

int main() {
  printf("Hello World\n");
  A *head = NULL;

  A *node1 = (A *)malloc(sizeof(A));

  A *node2 = (A *)malloc(sizeof(A));

  A *node3 = (A *)malloc(sizeof(A));

  A *node4 = (A *)malloc(sizeof(A));

  A *node5 = (A *)malloc(sizeof(A));

  node1->data = 10;
  node1->next = node2;
  node1->prev= NULL;

  node2->data = 20;
  node2->next = node3;
  node2->prev= node1;

  node3->data = 30;
  node3->next = node4;
  node3->prev= node2;

  node4->data = 40;
  node4->next = node5;
  node4->prev= node3;

  node5->data = 50;
  node5->next = NULL;
  node5->prev= node4;

  head = node1;

  while (head != NULL) {
    printf("%d ", head->data);
    head = head->next;
  }

  head = node1 ;

  printf("\nBefore swap : ");
  while (head != NULL) {
    printf("%d ", head->data);
    head = head->next;
  }
  head = node1 ;
  
  
  head = swap_linkedlist(head);
  printf("\nAfter swap : ");
  
  while (head != NULL) {
    printf("%d ", head->data);
    head = head->next;
  }
  return 0;
}

A* swap_linkedlist (A * head )
{
    if( head == NULL || head->next == NULL )
    {
      return head ;
    }
    A * store_head = head ; // storing head
    A * iterate = head ; //  iteratre
    A * temp_next ;
    int change ;
    //printf("HI");
  //aprintf("Store head Data : %d\n",store_head->data);
  int swapped =4;
  do 
    {
      iterate = head ;
      
      while (iterate->next != NULL )
      {
        temp_next = iterate->next ;
        //printf("Store head Data : %d\n",store_head->data);
          if (iterate->data < temp_next->data)
          {   
              change = iterate->data ;

              iterate->data = temp_next->data ;

              temp_next->data = change;
              
          }
          iterate = iterate->next ;
       
          //printf("BYE");
      }
    }while(swapped--);
  
  //printf("BYE");
    return store_head ;
}
/*
void swap_linkedlist(A *head) {
  int temp;
  int swapper = 0;
 
  A * prev = NULL;
 
  do {
    swapper = 0;
    A *current = head; // Use a separate pointer to traverse the list
    while (current->next != NULL) {
      if (current->data < current->next->data) {
        temp = current->next->data;
        current->next->data = current->data;
        current->data = temp;
        swapper = 1;
      }
      else {
        current = current->next;
      }
     
    }
  } while (swapper);
}*/

/*
void swap_linkedlist(A **head) {
  A *main_head = head;
  A * prev = NULL ;
  int temp;
  int swapper = 0;
  do {
    swapper = 0;
    A *current = *head ;
    while (current->next != NULL) {
      if (current->data < current->next->data) {
        temp = current->next->data;
        current->next->data = current->data;
        current->data = temp;
        swapper = 1;
      } else {
        current = current->next;
      }
    }
  } while (swapper);
}
*/






