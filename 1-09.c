#include <stdio.h>

int main()
{
  int c;
  int nb;
  nb = 0;
  while ((c = getchar()) != EOF ) {
    if (c == ' ') {
      if (nb == 0) putchar(c);
      ++nb;
    }
    if ( c != ' ') {
      putchar(c);
      nb = 0;
    }
  }
  return 0;
}

