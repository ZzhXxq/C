#include <stdio.h>
#include <stdbool.h>

int main(){
  int W, D;
  scanf("%d%d", &W, &D);
  bool mirrow[W][D];
  for (int d = D - 1; d >= 0; d--)
    for (int w = 0; w < W; w++){
      int tmp;
      scanf("%d", &tmp);
      mirrow[w][d] = (tmp == 1);
    }
  return 0;
}
