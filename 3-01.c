#include <stdio.h>

int binsearch(int x, int v[], int n);

int main()
{
  int kur[10] = {2,3,4,5,6,7,8,9,10,11};
  for(int x = 1; x <= 10; ++x) {
    printf("%d ", binsearch(x, kur, 10));
    printf("\n");
  }
} 

int binsearch(int x, int v[], int n)
{
  int low, high, mid;
  low = 0;
  high = n - 1;
  while(low < high) {
    mid = (low+high) / 2;
    if(x <= v[mid])
      high = mid;
    else 
      low = mid + 1;
  }
  return (x == v[low]) ? low : -1;
}
