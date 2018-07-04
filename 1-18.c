#include <stdio.h>
#define MAXLINE 10000

int agetline(char s[], int lim);
void copy(char to[], char from[]);

int main()
{ 
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = agetline(line, MAXLINE)) > 0) {
    max = len;
    copy(longest, line);
    if (line[0] != '\n' && line[0] != '\0')
      printf("%s", line);
  }
  return 0;
}

int agetline(char s[], int lim)
{ 
  int c, i;
  for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  --i;
  while (i == 0 || s[i] == ' ' || s[i] == '\t') {
    --i;
  }
  ++i;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[])
{
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
