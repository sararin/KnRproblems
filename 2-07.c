#include <stdio.h>

int invert(int x, int p, int n);

int main()
{
  int a = 100;
  printf("%d\n", invert(a, 3, 2));
}

int invert(int x, int p, int n)
{
  return x ^ (((1u<<n))-1) << p;
}
