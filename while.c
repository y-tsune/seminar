#include <stdio.h>
int main(void) {
  float x = 10.0;
  while (x > 0.01) {
    x = x * 0.9;
    printf("x=%f\n", x);
  }
  return 0;
}
