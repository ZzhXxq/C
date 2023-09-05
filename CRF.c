#include <stdio.h>

int main(){
  int s, f, t;
  scanf("%d%d%d", &s, &f, &t);
  int cr = s - t;
  int r = f/2 - 4*cr - t;
  int c = s - cr - r;
  printf("%d\n%d\n%d\n", c, r, cr);
  return 0;
}
