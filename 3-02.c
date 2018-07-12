#include <stdio.h>

void escape(char s[], char t[]);
void descape(char s[], char t[]);

int main()
{
  char crow[] = "cr\tow";
  char down[7];
  escape(crow, down);
  printf("%s , %s\n", crow, down);
  char wocr[] = "cr\\tow";
  char nwod[10];
  descape(wocr, nwod);
  printf("%s , %s\n", nwod, wocr);
}

void escape(char s[], char t[])
{
  int j = 0;
  for(int i = 0; s[i] != '\0'; ++i, ++j) {
    switch(s[i]) {
      case '\t': t[j] = '\\'; t[++j] = 't'; break;
      case '\n': t[j] = '\\'; t[++j] = 'n'; break;
      default: t[j] = s[i]; break;
    }
  }
}

void descape(char s[], char t[])
{
  int j = 0;
  for(int i = 0; s[i] != '\0'; ++i, ++j) {
    if(s[i] == '\\')
      switch(s[i+1]) {
        case 't': t[j] = '\t'; ++i; break;
        case 'n': t[j] = '\n'; ++i; break;
        default: t[j] = '\\'; ++i; break;
      }
    else t[j] = s[i];
  }
}

