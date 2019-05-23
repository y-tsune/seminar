#include<stdio.h>
int power_int(int x, int y) {
  int i;
  int p=1;
  for(i = 0; i < y; i++) {
    p = p * x;
  }
  return p;
}

int main(void) {
  int x = 2;
  int y = 10;
  int z = power_int(x, y);
  printf("%d ^ %d = %d\n", x, y, z);
  x = x + 1;
  y = y + 1;
  z = power_int(x, y);
  printf("%d ^ %d = %d\n", x, y, z);
  return 0;
}
