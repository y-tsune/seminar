#include<stdio.h>
#include<stdlib.h>
struct List {
  int x;
  struct List* next;
};

struct List* add_node(int val, struct List* head) {
  struct List *new_node = malloc(sizeof(struct List));
  new_node->x = val;
  new_node->next = head;
  head = new_node;
  return head;
}

void show_list(struct List* node) {
  /* BRANK */
}

int main(void) {
  struct List* head = NULL;
  head = add_node(3, head);
  head = add_node(10, head);
  show_list(head);
}
