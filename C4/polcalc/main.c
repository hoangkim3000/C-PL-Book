#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

#define CTRL_KEY(k) ((k) & 0x1f)
#define MAXOP 100 /* max size of operand */
// #define NUMBER '0' /* signal that a number was found */

/* reverse polish calclulator */
int main ()
{
  int type;
  double op2;
  char s[MAXOP];

  while ((type = getop(s)) != 'q') 
  {
    switch (type)
    {
      case NUMBER:
        push(atof(s));
        break;
      case '+':
        push(pop() + pop());
        break;
      case '-':
        op2 = pop();
        push(pop() - op2);
        break;
      case '/':
        op2 = pop();
        if (op2 != 0)
          push(pop() / op2);
        else
          printf("zero division\n");
        break;
      case '*':
        push(pop() * pop());
        break;
      case '\n':
        printf("\t%.8g\n", pop());
        break;
      case 's':
        rdstck();
        break;
      default:
        printf("unknown command %s\n", s);
        break;
    }
  }
  return 0;
}
