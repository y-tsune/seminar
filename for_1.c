#include <stdio.h>
int main(void) {
  int i = 0;
  for (; i < 10;) {
    printf("%d\n", i);
    i = i + 1;
  }
  return 0;
}
