#include <stdio.h>
#define MAX 100
/* fix the fact its buggy with A-G-E and doesn't work for -A-C*/
void expand(char s1[], char s2[]);

int main()
{
  char test[] = "a-z0-9A-D-G";
  char result[MAX];
  expand(test, result);
  printf("%s , %s\n", test, result);
}

void expand(char s1[], char s2[])
{
  char from, to, j;
  j = 0;
  for(int i = 0; s1[i] != '\0'; ++i)
    if(s1[i] == '-'){
      from = s1[i-1];
      to = s1[i+1];
      for( ; from != to; from++, j++)
        s2[j] = from;
      s2[j] = to;
      s2[++j] ='\0';
    }
}
