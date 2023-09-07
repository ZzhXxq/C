#include <stdio.h>

int main(){
  int h, w, d;
  scanf("%d%d%d", &h, &w, &d);
  
  int sur = (h * w + w * d + d * h) * 2;
  int vol = h* d* w;

  printf("%d\n%d\n", sur, vol);
  return 0;
}
