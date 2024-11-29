#include <stdio.h>

int main() {

  int c;

  while ((c = getchar()) != 'q') {
    if (c == ' ' || c == '\t')
      putchar('\n');
    else
      putchar(c);
  }
}
