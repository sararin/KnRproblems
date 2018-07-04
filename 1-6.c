#include <stdio.h>
/* if getchar() == EOF then c equals to 0
 * else c equals to 1*/
int main()
{
  int c;
  c = getchar() != EOF;
  printf("%d\n", c);
}
