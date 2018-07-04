#include <stdio.h>
#define MAXLINE 8000

int agetline(char s[], int lim);
void reverse(char to[], char from[], int len);

int main()
{ 
  int len;
  char line[MAXLINE];
  char longest[MAXLINE];

  while ((len = agetline(line, MAXLINE)) > 0) {
    reverse(longest, line, len-1);
    printf("%s", longest);
    }
  return 0;
}

int agetline(char s[], int lim) /*no need to correctly manage \n and \0 */
{ 
  int c, i;
  for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  return i;
}

void reverse(char to[], char from[], int len) /*mangaging is done here instead*/
{
  int i;
  i = 0;
  while (len >= 0) {
    to[i] = from[len];
    ++i;
    --len;
  }
  to[i] = '\n';
  to[++i] = '\0';
}
