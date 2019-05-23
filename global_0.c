#include<stdio.h>
int x = 10;

int f(void) {
  x = x - 2;
  printf("f: %d\n", x);
  main();
}

int main(void) {
  if(x <= 0) {
    return 0;
  }
  int x = 0;
  x = x + 1;
  printf("main: %d\n", x);
  f();
}
