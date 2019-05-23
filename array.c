#include <stdio.h>
int main(void) {
  int a[5];
  int i;
  int x = 0;
  for (i = 0; i < 5; i++) {
    a[i] = i * 10;
  }
  for (i = 0; i < 5; i++) {
    printf("a[%d] = %d\n", i, a[i]);
  }

  return 0;
}
