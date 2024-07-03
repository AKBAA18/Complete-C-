#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Velammal_engineering_College {
  char *name;
  int register_number;
  float percentage_scored;
  struct Velammal_engineering_College *next;

} typedef college;

int strength;

college *manager = NULL;

void admission();
void studentlist();
void sort_based_on_percentage();

int main() {
  // manager=(college *)malloc(sizeof(college));

  printf("Hi\n");
  while (1) {
    printf("\n.....1 for admission..... \n.....2 for seeing the queue of list "
           ".....\n.....3 for seeing your position on list...... \nEnter your "
           "choice :  ");
    int choice;
    scanf("%d", &choice);
    printf("\n");
    if (choice == 1) {
      admission();
      strength++;
    }
    if (choice == 2) {
      studentlist();
    }
    if (choice == 3) {
      sort_based_on_percentage();
    }
  }
}

void admission() {
  college *student = (college *)malloc(sizeof(college));
  student->name = (char *)malloc(sizeof(char) * 50);

  char name_arr[50];
  printf("Enter your name : ");
  getchar();

  // int noofbytes=fgets(name_arr , sizeof(name_arr) , stdin);
  /*it wont return number of bytes received it return NULL for successful return
   */

  fgets(name_arr, sizeof(name_arr), stdin);
  if (name_arr[strlen(name_arr) - 1] == '\n') {
    name_arr[strlen(name_arr) - 1] = '\0';
  }
  printf("\n");
  strcpy(student->name, name_arr);

  int reg_no;
  printf("Enter your 12th register number  : ");
  scanf("%d", &reg_no);
  printf("\n");
  student->register_number = reg_no;

  float score;
  printf("Enter your score in percentage : ");
  scanf("%f", &score);
  printf("\n");
  student->percentage_scored = score;

  student->next = NULL;

  if (manager == NULL) {
    manager = student;
  } else {
    college *temp = manager;
    ;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = student;
  }
}

// Now we are going to sort the student by thier mark
void sort_based_on_percentage() {

  college *head = manager;
  college *temp = manager;
  college *temp_next;
  int count = strength;

  do {
    temp=manager;
    while (temp->next != NULL) {
      temp_next = temp->next;
      if (temp->percentage_scored < temp_next->percentage_scored) {
        char *temp_name = temp->name;
        int temp_reg = temp->register_number;
        float percentage = temp->percentage_scored;

        temp->name = temp_next->name;
        temp->register_number = temp_next->register_number;
        temp->percentage_scored = temp_next->percentage_scored;

        temp_next->name = temp_name;
        temp_next->register_number = temp_reg;
        temp_next->percentage_scored = percentage;
      }
      temp = temp->next;
    }
    printf("count : %d " , count );
  } while (count--);
}

void studentlist() {
  printf("The student list who are joinin in our college are below .....\n");

  college *iterate = manager;
  // terate=iterate->next;

  /*
   while(iterate->next!=NULL)
   {
       printf("Your Name                 : %s\n" , iterate->name);
       printf("Your register number      : %d\n" , iterate->register_number);
       printf("Your score in percentage  : %.2f\n", iterate->percentage_scored);
       iterate=iterate->next;
       printf("\n");
   }
   //for printing the last element
   printf("Your Name                 : %s\n" , iterate->name);
   printf("Your register number      : %d\n" , iterate->register_number);
   printf("Your score in percentage  : %.2f\n", iterate->percentage_scored);
   */
  while (iterate != NULL) {
    printf("Your Name                 : %s\n", iterate->name);
    printf("Your register number      : %d\n", iterate->register_number);
    printf("Your score in percentage  : %.2f\n", iterate->percentage_scored);
    iterate = iterate->next;
    printf("\n");
  }
}
