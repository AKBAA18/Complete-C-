#include <stdio.h>

int main(void) {
  int arr[10] = {1, 2, 3, 4, 5, 6};
  int element = 55;
  int index = 2;
  int *p = arr;
  p[index] = element;
  printf(
      "Now we are printing the array before deletion and after insertion \n");
  for (int i = 0; i < 6; i++) {
    printf("a[%d]=%d\n", i, p[i]);
  }
  int deleteele = 4;
  for (int i = 4; i < 6 - 1; i++) {
    p[i] = p[i + 1];
  }
  int noofele = 6 - 1;
  printf("Now we are printing the array after deletion\n");
  for (int i = 0; i < noofele; i++) {
    printf("a[%d]=%d\n", i, p[i]);
  }

  return 0;
}