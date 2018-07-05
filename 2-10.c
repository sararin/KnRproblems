#include <stdio.h>

void lower(int s);

int main()
{
  int s = 'L';
  lower(s);
}

void lower(int s)
{
  return (s>= 'A' && s <= 'Z') ? (s + 'a' - 'A') : s; 
}
