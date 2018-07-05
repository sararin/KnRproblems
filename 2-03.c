#include <stdio.h>

void htoi(char s[]);
int convert(int x, char c);

int main()
{
  char s[] = "\\x1a\\x77\\x25\\x57\0";
  htoi(s);
}

void htoi(char s[])
{
  int state = 0;
  int tmp = 0;
  for(int i = 0; s[i] != '\0'; ++i) {
    if(state == 2) {
      tmp += convert(1, s[i]);
      state = 0;
    }
    if(state == 1) {
      tmp += convert(16, s[i]);
      state = 2;
    }
    if(s[i] == '\\') {
      printf("%d ", tmp);
      tmp = 0;
      if(s[i+1] == 'x') {
        state = 1;
        ++i;
      }
    }
  }
  printf("%d\n", tmp);
}

int convert(int x, char c)
{
  if(c >= '0' && c <= '9')
    return x * (c-'0');
  if(c >= 'a' && c <= 'f')
    return x * (c-87);
  if(c >= 'A' && c <= 'F')
    return x * (c-65);
}
