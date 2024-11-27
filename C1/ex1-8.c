#include <stdio.h>

int main() {

  int c;
  int blanks, tabs, newlines;
  blanks = tabs = newlines = 0;

  while ((c = getchar()) != 'q') {
    if (c == ' ')
      ++blanks;
    if (c == '\t')
      ++tabs;
    if (c == '\n')
      ++newlines;
  }
  printf("%d blanks\n%d tabs\n%d newlines\n", blanks, tabs, newlines);
}
