#include <stdio.h>

char lower(int s);

int main()
{
  int s = 'L';
  lower(s);
}

char lower(int s)
{
  return (s>= 'A' && s <= 'Z') ? (s + 'a' - 'A') : s; 
}
