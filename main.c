#include <stdio.h>

int f(void) {
  printf("f\n");
  main();
  return 0;
  
}

int main(void) {
  printf("main\n");
  f();
  return 0;
}
