#include <stdio.h>
struct Student {
  int student_number;
  int score;
};

int ave_score(struct Student a[], int size) { /* BRANK */ }

int main(void) {
  struct Student x[5] = {{1, 80}, {2, 92}, {3, 75}, {4, 63}, {5, 77}};
  int ave = ave_score(x, 5);
  printf("%d\n", ave);
  return 0;
}
