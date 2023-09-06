#include <stdio.h>

int main(){
  int s, f, t;
  scanf("%d%d%d", &s, &f, &t);
  int cr = s - t;
  f -= 8 * cr;
  int r = f / 2 - t;
  int c = s - r - cr;
  if(c < 0 || r < 0 || cr < 0 || f % 2 != 0)
    printf("0");
  else
    printf("%d\n%d\n%d\n", c, r, cr);
  return 0;
}
