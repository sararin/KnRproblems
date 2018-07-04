#include <stdio.h>
#define MAXLINE 8000

/* instructions unclear
 * hand stuck in a toaster
 *
 * revise main routine of the longest-line program so it will correctly print
 * the lenght of arbitrairly long input lines, and as much as possible of the
 * test
 */

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
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }
  if (max > 0)
    printf("%s", longest);
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

void copy(char to[], char from[])
{
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
