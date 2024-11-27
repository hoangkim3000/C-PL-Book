#include <stdio.h>

int main () {

  int c;
  int last = ' ';

  while ((c = getchar()) != 'q') {
    if (c != ' ') 
      putchar(c);
    else if (last != ' ')
      putchar(c);
    last = c;
  }
}
