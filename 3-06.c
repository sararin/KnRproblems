#include <stdio.h>
#include <string.h>

void reverse(char s[]);
void itoa(int n, char s[], int b);

int main()
{
  int num = 1232403478;
  char lo[1000];
  int h = 15;
  itoa(num, lo, h);
  printf("%s\n", lo);
}

void itoa(int n, char s[], int b)
{
  int sign, i;

  if((sign = n) < 0)
    n = -n;
  i = 0;
  do {
      s[i++] = n % 10 + '0';
  } while((n /= 10 ) > 0);
  if(sign < 0)
    s[i++] = '-';
  for( ; i < b; ++i)
    s[i] = ' ';
  s[i] = '\0';
  reverse(s);
}

void reverse(char s[])
{
  int c, j, i;
  for(i = 0, j = strlen(s)-1; i < j; i++, j--) {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}

