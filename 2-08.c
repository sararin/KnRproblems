#include <stdio.h>

int rightrot(int x, int n);

int main()
{
  int lol = 256;
  printf("%d\n", rightrot(lol, 2));
}

int rightrot(int x, int n)
{
  return x >> n;
}
