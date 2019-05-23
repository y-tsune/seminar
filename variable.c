#include <stdio.h>
int main(void) {
  int x = 0;
  printf("x=%d\n", x);
  x = x + 1;
  printf("x=%d\n", x);
  int y = x / 10;
  printf("y=%d\n", y);

  float f = 3.0;
  float g = 3.0 / 2.0;
  printf("f=%f, g=%f\n", f, g);

  char c = 'a';
  printf("c=%c\n", c);
  return 0;
}
