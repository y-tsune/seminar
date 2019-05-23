#include <stdio.h>
int main(void) {
  int x = 11;
  if (x < 0) {
    printf("x is minus\n");
  } else if (x == 0) {
    printf("x is zero\n");
  } else if (0 < x && x < 10) {
    printf("x is small number\n");
  } else {
    printf("x is many\n");
  }
  return 0;
}
