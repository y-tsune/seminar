#include<stdio.h>
int x = 10;

int f(void) {
  x = x - 2;
  printf("f: %d\n", x);
  main();
}

int main(void) {
  int x = 0;
  if(x <= 0) {
    return 0;
  }
  x = x + 1;
  printf("main: %d\n", x);
  f();
}
