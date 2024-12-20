/* Libraries */
#include <ctype.h>
#include "calc.h"

int getch(void);
void ungetch(int);

/* get next character or operand */
int getop(char s[])
{
  int i, c;

  while ((s[0] = c = getch()) == ' ' || c == '\t')
    ;
  s[1] = '\0';

  if (!isdigit(c) && c != '.')
  {
    return c;
  }
  i = 0;
  if (isdigit(c))
  {
    while (isdigit(s[++i] = c = getch()))
      ;
  }
  if (c == '.')
  {
    while (isdigit(s[++i] = c = getch()))
      ;
  }
  s[i] = '\0';
  if (c != 'q')
    ungetch(c);
  return NUMBER;
}

