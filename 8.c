#include <stdio.h>
#include <stdbool.h>

int main(){
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  bool k = (a > 0 && b > 0 && c > 0 && a + c > b && a + b > c && b + c > a);
  printf("%d", k);
  return 0;
}
