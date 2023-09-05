#include <stdio.h>
#include <stdbool.h>

int main(){
  int a, b, c, d, e, f, g, h;
  scanf("%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h);
  bool k = (a * d - b * c > 0 && c * f - d * e > 0 && e * h - f * g > 0 && g * b - a * h > 0);
  printf("%d\n", k);
  return 0;
}
