#include <stdio.h>
#define TAB 4

int main()
{
  int c;
  while ((c=getchar()) != EOF) {
    if (c == '\t')
      for(int i = 0; i < TAB; i++)
        printf(" ");
    else
      putchar(c);
  }
}
