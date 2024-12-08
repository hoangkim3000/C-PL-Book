/* Libraries */
#include <stdio.h>
#include "calc.h"

/* Data */
#define MAXVAL 100 /*max depth of stack */

/* global variables */
int sp = 0;             /* next free stack position */
double val[MAXVAL];     /*value stack*/

/* push value onto stack */
void push (double f)
{
  if (sp < MAXVAL)
    val[sp++] = f;
  else
    printf("stack.push: Stack full\n");
}

/* pop and return value from stack */
double pop ()
{
  if (sp > 0)
    return val[--sp];
  else
  {
    printf("stack.pop: Stack empty\n");
    return 0.0;
  }
}

void rdstck()
{
  int i = sp;
  if (sp>0)
  {
    while (i>0)
      printf("%g ", val[--i]);
  }
  else
  {
    printf("stack.rdstck: Stack empty\n");
  }
}

