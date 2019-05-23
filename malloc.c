#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *p = malloc(sizeof(int));
  *p = 20;
  printf("%p: %d\n", p, *p);

  int *a = malloc(sizeof(int) * 5);
  int i;
  for (i = 0; i < 5; i++) {
    a[i] = i;
  }
  for (i = 0; i < 5; i++) {
    printf("a[%d] = %d\n", i, a[i]);
  }
  free(p);
  free(a);
  return 0;
}
