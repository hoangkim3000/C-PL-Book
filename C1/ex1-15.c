#include <stdio.h>

float conversion(int fahr);

int main() {

  int fahr;
  int step = 20;

  for (fahr = 0; fahr <= 100; fahr = fahr + step)
    printf("%3d %6.1f\n", fahr, conversion(fahr));
}

float conversion(int fahr) {
  return (5.0/9.0)*(fahr-32);
} 
