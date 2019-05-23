#include<stdio.h>
int main(void) {
  char x = 'A';
  char y = 'Z';
  int xx = (int)x;
  int yy = (int)y;
  int z = 'Z'-'A';
  
  printf("xx = %d, yy = %d\n", xx, yy);
  printf("%c - %c = %d\n", x, y, z);

  return 0;
}
