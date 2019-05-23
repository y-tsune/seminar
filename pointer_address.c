#include<stdio.h>
int main(void) {
  int x = 10;
  int y = 20;
  int *p;
  int *q;
  p = &x;
  q = &y;
  printf("x = %d, y = %d\n", x, y);
  printf("p = %p, q = %p\n", p, q);
  printf("*p = %d, *q = %d\n", *p, *q);
  *p = *p + *q;
  printf("x = %d, y = %d\n", x, y);
  p = q;
  *p = *p + *q;
  printf("x = %d, y = %d\n", x, y);
  return 0;
}
