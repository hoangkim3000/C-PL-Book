#include <stdio.h>

int main() {

  int c, len, i, j;
  int len_count[11];

  len = 0;
  for (i=0; i<11; ++i)
    len_count[i] = 0;

  while ((c = getchar()) != 'q') {
    if (c == ' ' || c == '\n' || c == '\t') {
      ++len_count[len];
      len = 0;
    }
    else 
      ++len;    
  }

  printf("Number of words of length <10\n\n");
  
  for (i = 1; i<11; ++i) {
    printf("%d: ", i);
    for (j = 0; j<len_count[i]; ++j) {
      putchar('#');
    }
    putchar('\n');
  }  
}
