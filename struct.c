#include <stdio.h>

struct Student {
  int student_number;
  int score;
};

int main(void) {
  struct Student a;
  struct Student b;
  a.student_number = 1;
  a.score = 80;
  b.student_number = 2;
  b.score = 65;
  printf("a: s_num = %d, score = %d\n", a.student_number, a.score);
  printf("b: s_num = %d, score = %d\n", b.student_number, b.score);
  return 0;
}
