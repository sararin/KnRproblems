#include <stdio.h>
#include <string.h>

void reverse(char s[]);
void itob(int n, char s[], int b);

int main()
{
  int num = 16;
  char lo[1000];
  int h = 2;
  itob(num, lo, h);
  printf("%s\n", lo);
}

void itob(int n, char s[], int b)
{
  int i = 0;
  int temp;
  do {
    if((temp = n % b)> 9)
      s[i++] = temp + 55;
    else
      s[i++] = temp + '0';

  } while((n /= b ) > 0);
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

