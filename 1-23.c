#include <stdio.h>
#define MAXLINE 10000
#define LINES 80

int agetline(char s[], int lim);
void removeComments(char to[]); 

int main()
{ 
  int len;
  char line[MAXLINE];

  agetline(line, MAXLINE);
  removeComments(line);
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

void removeComments(char to[])
{
  int place, i, j;
  int alert;
  alert = 0;
  char from[MAXLINE];
  j = 0;
  for(i = 0; to[i] != '\0'; ++i) {
    if (to[i] == '/')
      if (to[i+1] == '*') {
        alert = 1;
      }
    if (alert != 1) {
      from[j] = to[i];
      ++j;
    }
    if (to[i] == '/')
      if (to[i-1] == '*') {
        alert = 0;
      }
  }
  printf("%s", from);
}
