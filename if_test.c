#include <stdio.h>
int main(void) {
  int x = -1;
  int y = x > 0;
  int z;

  if(z=y) {
    printf("hoge\n");
  } else {
    printf("fuga\n");
  }

  printf("%d\n", z=y);
  return 0;
}
