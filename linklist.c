#include <stdio.h>
#include <stdlib.h>

struct node { int value; struct node *next };


void print_list (struct node * curr_node) {
  while (curr_node.next) {
    printf("%d\n", curr_node.value);
    curr_node = curr_node.next
  }
  printf("%d\n", curr_node.value);
}


int main() {
  struct node * first = 



}
