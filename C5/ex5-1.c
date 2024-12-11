#include <ctype.h>
#include <stdio.h>

int getch(void);
void ungetch(int);

int uc;

int getint(int *px)
{
  int c, sign;

  while (isspace(uc = c = getchar()))
    ;
  
  if (!isdigit(c) && c!= EOF && c != '+' && c != '-')
  {
    //ungetch(c);
    return 0;
  }

  sign = (c == '-') ? -1 : 1;
  
  if (c == '+' || c == '-')
    c = getchar();

  for (*px = 0; isdigit(c); c = getchar())
    *px = 10 * *px + (c - '0');

  *px *= sign;

//  if (c == EOF)
//    ungetch(c);

  return c;
}

int main ()
{
  int x;
  int rx;
  int t = '\n';

  x = getint(&rx);

  printf("%d, %d\n", x, rx);
  printf("%d", t);
}
