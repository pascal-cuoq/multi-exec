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

int main_with_loop(void) {
  int n = 0;
  for (int i = 0; i < 4; i++) {
    char *p = malloc(1);
    n = (n << 1) + !p;
    free(p); // or not, who cares!
  }
  printf("n is: %d\n", n);
  return 0; // only "main" is allowed not to have this
}

