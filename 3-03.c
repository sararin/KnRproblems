#include <stdio.h>
#define MAX 100

void expand(char s1[], char s2[]);

int main()
{
  char test[] = "a-z";
  char result[MAX];
  expand(test, result);
  printf("%s , %s\n", test, result);
}

void expand(char s1[], char s2[])
{
}
