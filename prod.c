#include <stdio.h>
int main(void) {
  int a[2][2] = {{1, 2}, {4, 5}};
  int b[2][1] = {{1}, {2}};
  int c[2][1];
  int i, j, k;
  /*

    BRANK

  */
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++) {
      printf("%d ", c[i][j]);
    }
    printf("\n");
  }
  return 0;
}
