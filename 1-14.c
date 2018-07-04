#include <stdio.h>

int main()
{
  int c, i, x;
  int nalpha[26];
  for (i = 0; i < 26; ++i) nalpha[i] = 0;
  while ((c = getchar()) != EOF) 
    if (c >= 'a' && c <= 'z')
        ++nalpha[c-'a'];
  for (i = 0; i < 26; ++i) {
    printf("%c %d ", i+97, nalpha[i]);
    for (x = 0; x < nalpha[i]; ++x) {
      printf("=");
    }
    printf("\n");
  }
}
