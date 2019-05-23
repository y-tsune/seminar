#include <stdio.h>

int main(void) {
  int m[3][3] = {{0, 1, 2}, {1, 2, 3}, {2, 3, 4}};
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
  return 0;
}
