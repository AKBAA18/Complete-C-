#include <stdio.h>
#include <stdlib.h>

void bubblesort(int *, int);
int *searching(int *, int, int);

int main(int noofret, char *sarr[]) {

  int len = atoi(sarr[1]);
  printf("The size of array : %d\n", len);
  int arr[len];
  for (int i = 0; i < len; i++) {
    printf("Enter the %d element : ", i + 1);
    scanf("%d", &arr[i]);
  }
  int choice = atoi(sarr[2]);
  if (choice == 1) {
    printf("You have entered print option \nArray is :\n");
    for (int i = 0; i < len; i++) {
      printf("a[%d] =%d ", i, arr[i]);
    }
  }
  printf("\n");
  void (*funcbubblesort)(int *, int) = bubblesort;
  if (choice == 2) {
    funcbubblesort(arr, len);
    printf("The sorted array is :\n");
    for (int i = 0; i < len; i++) {
      printf("a[%d] =%d  ", i, arr[i]);
    }
  }
  printf("\n");

  if (choice == 3) {
    funcbubblesort(arr, len);
    printf("Your choice is to print highest and lowest element \n");
    printf("The highest  element is %d\n", arr[len - 1]);
    printf("The smallest element is %d\n", arr[0]);
  }
  int *(*funcsearching)(int *, int, int) = searching;
  if (choice == 4) {
    int element = atoi(sarr[3]);
    int *q = funcsearching(arr, element, len);
    printf("The element found at pos %d\n", q - arr);
  }

  return 0;
}
void bubblesort(int *p, int len) {
  int temp = 0;
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len - i - 1; j++) {
      if (p[j] > p[j + 1]) {
        temp = p[j];
        p[j] = p[j + 1];
        p[j + 1] = temp;
      }
    }
  }
}
int *searching(int *p, int element, int len) {
  for (int i = 0; i < len; i++) {
    if ((p[i]) == element)
      return p + i;
  }
  return NULL;
}