#include <stdio.h>
#include <string.h>

int strindexR(char s[], char t[]);

int main()
{
  char line[] = "Do you think i could be someone at all?";
  char pattern[] = "think";

  printf("%d\n", strindexR(line, pattern));
  return 0;
}

int strindexR(char s[], char t[])
{
  int i, j, k;
  for(i = strlen(s)-1; i != 0; i--) {
    for(j = i, k = strlen(t)-1; k != 0 && s[j] == t[k]; j--, k--)
      ;
    if(k == 0)
      return i;
  }
  return -1;
}
