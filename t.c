#include <stdlib.h>
#include <stdio.h>

int main(void) {
  char *p1, *p2, *p3;

  p1 = malloc(1);
  p2 = malloc(1);
  p3 = malloc(1);
  int n = (!p1 << 2) + (!p2 << 1) + !p3;
  printf("n is: %d\n", n);
}
