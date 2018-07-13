#include <stdio.h>

int main()
{
  float fahr, celsius;
  int lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;
  celsius = lower;
  printf("Fahr | Celsius\n");
  while (celsius <= upper) {
    fahr = ((9.0/5.0) * celsius)+32.0;
    printf("%4.0f | %7.1f\n", fahr, celsius);
    celsius += step;
  }
  return 0;
}
