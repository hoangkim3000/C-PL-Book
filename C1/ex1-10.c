#include <stdio.h>

int main () {

  int c;

  while ((c = getchar()) != 'q') {
    if (c == '\t')
      {
	putchar('\\');
	putchar('t')c;
      }
    else
      putchar(c);
  }
}
