#include <stdio.h>
#define row 100
#define col 100

int main(){
  int r, c;
  scanf("%d%d", &r, &c);
  int num[row][col];
  for (int R = 0; R < r; R++){
    for (int C = 0; C < c; C++){
      scanf("%d", &num[R][C]);
    }
  }
  int ave[col] = {0};
  for (int C = 0; C < c; C++){
    int sum = 0;
    for (int R = 0; R < r; R++)
      sum += num[R][C];
    ave[C] = sum / r;
  }
  for (int i = 0; i < c; i++)
    printf("%d\n", ave[i]);
  return 0;
}
