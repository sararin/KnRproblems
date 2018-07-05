#include <stdio.h>

void squeeze(char s[], char a[])

int main()
{
  char aa[] = "blogoslawieni cisi\0";
  char ab[] = "bog";
  squeeze(aa, ab);
  printf("%s", aa);
}

void squeeze(char s[], char a[])
{
  int i, h, j;
  for(i = h = 0; s[i] != '\0'; i++)
    for(j = 0; a[j] != '\0'; j++)
      if(s[i] != a[j])
        s[h++] = s[i];
  s[h] = '\0';
}
