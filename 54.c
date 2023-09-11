#include <stdio.h>

int main(){
  int n, m;
  scanf("%d%d", &n, &m);
  int sum = 0;
  for (int d = 100000; d >= 1; d /= 10){
    int test = m / d;
    if (test == n)
      sum++;
    m %= (d * 10);
  }
  printf("%d\n", sum);
  return 0;
}
