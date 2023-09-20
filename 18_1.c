#include <stdio.h>
#define row 102
#define col 102

int main(){
  int R, C;
  scanf("%d%d", &R, &C);
  int num[row][col] = {0};
  for (int r = 1; r < R + 1; r++){
    for (int c = 1; c < C + 1; c++){
      scanf("%d", &num[r][c]);
    }
  }
  
  for (int r = 1; r < R + 1; r++){
    for (int c = 1; c < C + 1; c++){
      if (num[r][c] > num[r - 1][c] && num[r][c] > num[r + 1][c] && num[r][c] > num[r][c - 1] && num[r][c] > num[r][c + 1])
        printf("%d\n", num[r][c]);
    }
  }
  return 0;
}
