#include<stdio.h>
void zero_array(int a[], int size) {
  int i;
  for(i=0; i<size; i++) {
    a[i] = 0;
  }
}

int main(void) {
  int x[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int i;
  zero_array(x, 10);

  for(i = 0; i<10; i++) {
    printf("x[%d] = %d\n", i, x[i]);
  }
  return 0;
}
