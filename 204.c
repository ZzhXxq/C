#include <stdio.h>
#include <stdbool.h>

int main(){
  int W, D;
  scanf("%d%d", &W, &D);
  bool mirrow[W][D];
  for (int d = D - 1; d >= 0; d--){
    for (int w = 0; w < W; w++){
      int tmp;
      scanf("%d", &tmp);
      mirrow[w][d] = (tmp == 1);
    }
  }
  int dx[4] = {0, -1, 0, 1};
  int dy[4] = {1, 0, -1, 0};
  int newdir[4] = {3, 2, 1, 0};

  for (int i = 0; i < 2 * (W + D); i++){
    
  }
  return 0;
}
