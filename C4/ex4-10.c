#include <stdio.h>
#include <stdlib.h>


#define MAXLINE 20
char input[MAXLINE];

int fetline(void);

int main() {
  while (fetline() !=0)
    {
      printf("%s\n", input);
      printf("%c\n", input[0]);
    }
  return 0;
}



int fetline()
{
  int c;
  int i=0;

  if ((c = getchar()) == 'q')
    return 0;
  else
    {
      while ((c = getchar()) != '\n')
	{
	  input[i] = c;
	  printf("%c\n", input[i]);
	  i++;
	}
      input[i] = '\0';
    }
  return 1;
}
