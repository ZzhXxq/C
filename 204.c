#include <stdio.h>
#include <stdbool.h>

int main(){
  int W, D;
  scanf("%d%d", &W, &D);
  bool mirrow[W][D];
  for (int d = D - 1; d >= 0; d--)
    for (int w = 0; w < W; w++)
      scanf("%d", &mirrow[w][d]);
  return 0;
}
