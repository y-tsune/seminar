#include<stdio.h>
int main(void) {
  char s[6] = "Hello";
  int i;
  printf("%s\n", s);
  for(i=0; i<6; i++) {
    printf("s[%d]=%c\n", i, s[i]);
  }
  return 0;
}
