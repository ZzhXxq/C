#include <stdio.h>

int main(){
  int x;
  scanf("%d", &x);
  int h = x / 100;
  x %= 100;
  int t = x / 10;
  x %= 10;
  printf("%d\n%d\n%d\n", h, t, x);
  return 0;
}
