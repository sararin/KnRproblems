#include <stdio.h>
#define MAX 1000
int main()
{
  char s[MAX];
  int c;
  int flag = 1;
  int i = 0;
  while flag
  {
    flag = 0;
    if (i < lim-1)
      if ((c=getchar()) != '\n')
        if (c != EOF) {
          s[i] = c;
          ++i;
          flag = 1;
        }
  }
}
