#include <stdio.h>
#define MAXLINE 10000
#define LINES 80

int agetline(char s[], int lim);
void breakInto(char to[], char from[]); 

int main()
{ 
  int len;
  char line[MAXLINE];
  char cut[MAXLINE];

  len = agetline(line, MAXLINE);
  if (len >= LINES) {
    breakInto(line, cut);
  }
  else
    printf("%s", line);
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

void breakInto(char to[], char from[])
{
  int place, i;
  int tm;
  tm = 0;
  place = 0;
  for(i = 0; to[i] != '\0'; ++i) {
    if (to[i] == ' '){
      place = i;
    }
    if ((i%LINES) == 0) {
      if( i != 0) {
        to[place] = '\n';
      }
    }
  }
  for(i = 0; to[i] != '\0'; ++i) {
    if (to[i] != '\n') {
      ++tm;
    }
    else {
      tm = 0;
    }
    if (tm == LINES)
      printf("\n");
    printf("%c", to[i]);
  }
}
