#include <stdio.h>

int bitcount(unsigned x);

int main()
{
  unsigned lol = 3;
  printf("%d\n", bitcount(lol));
}

int bitcount(unsigned x)
{
  int b;
  for(b = 0; x != 0; x &= (x-1))
      b++;
  return b;
}
