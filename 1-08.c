#include <stdio.h>

int main()
{
  int nl, nt, nb; /* new line new tab new blank */
  int c;
  nl = 0;
  nt = 0; 
  nb = 0;
  while((c = getchar()) != EOF ) {
    if (c == '\n')
      ++nl;
    if (c == '\t')
      ++nt;
    if (c == ' ')
      ++nb;
  }
  printf("newlines: %d, tabs: %d, blanks: %d\n", nl, nt, nb);
  return 0;
}

