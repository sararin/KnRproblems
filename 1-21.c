#include <stdio.h>
#define MAXLINE 10000

#define IN  1
#define OUT 0

/* to be done */

int agetline(char s[], int lim);
void tabularise(char to[], char from[], int lenght);

int main()
{ 
  int len;
  char line[MAXLINE];
  char tabularised[MAXLINE];

  len = agetline(line, MAXLINE);
  tabularise(line, tabularised, len);
  printf("%s", tabularised);
  return 0;
}

int agetline(char s[], int lim)
{ 
  int c, i;
  for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void tabularise(char to[], char from[], int lenght)
{
  int state = OUT;
  int i, iw;
  iw = 0;
  for (i = 0; i < lenght; ++i) {
    if (to[i] != ' ')
      from[i] = to[i];
    else if (to[i] == ' ') {
      from[i] = to[i];
      iw += 1;
    }
  }
}
