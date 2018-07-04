#include <stdio.h>

float FtoC(int fahr);

int main()
{
  float fahr, celsius;
  int lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;
  fahr = lower;
  printf("Fahr | Celsius\n");
  while (fahr <= upper) {
    celsius = FtoC(fahr);
    printf("%4.0f | %7.1f\n", fahr, celsius);
    fahr += step;
  }
  return 0;
}

float FtoC(int fahr)
{
  return (5.0/9.0) * (fahr-32.0);
}
