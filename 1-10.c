#include <stdio.h>

int main()
{
  int c;
  while((c = getchar()) != EOF ) {
    if (c == '\n') printf("\\n");
    if (c == '\t') printf("\\t");
    if (c == "\\") printf("\\");
    else putchar(c);
  }
  return 0;
}

