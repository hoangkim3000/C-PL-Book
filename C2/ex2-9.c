#include <stdio.h>

int bitcount(unsigned x) {
  int b;

  for (b = 0; x!=0; x>>=1)
    if (x & 01) {
      b++;
      putchar('1');
    }
    else
      putchar('0');
  return b;
}

int getbits(unsigned x, int p, int n) {

  return (x >> (p+1-n)) & ~(~0 << n);
}

int main() {
  int c;
  while ((c = getchar()) != 'q')
    bitcount(c);
}
