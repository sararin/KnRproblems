#include <stdio.h>

int any(char s[], char a[])

int main()
{
  int place;
  char aa[] = "blogoslawieni cisi\0";
  char ab[] = "bog";

  place = squeeze(aa, ab);
  printf("%d", place);
}

int any(char s[], char a[])
{
  int i, j;
  for(i = 0; s[i] != '\0'; i++)
    for(j = 0; a[j] != '\0'; j++)
      if(s[i] != a[j])
        return i;
  return -1;
}
