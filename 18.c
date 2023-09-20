#include <stdio.h>
#include <stdbool.h>
#define row 100
#define col 100

int main(){
  int R, C;
  scanf("%d%d", &R, &C);
  int num[row][col];
  for (int r = 0; r < R; r++){
    for (int c = 0; c < C; c++)
      scanf("%d", &num[r][c]);
  }
  bool large[row][col];
  for (int r = 0; r < R; r++){
    for (int c = 0; c < C; c++)
      large[r][c] = true;
  }
  for (int r = 0; r < R; r++){
    for (int c = 0; c < C; c++)
      if((r != (R - 1) && num[r][c] < num[r+1][c]) || (r != 0 && num[r][c] < num[r-1][c])
         || (c != 0 && num[r][c] < num[r][c-1]) || (c != (C - 1) && num[r][c] < num[r][c+1]))
        large[r][c] = false;
  }


  
  for (int r = 0; r < R; r++){
    for (int c = 0; c < C; c++){
      if (large[r][c])
        printf("%d\n", num[r][c]);
    }
      
  }
  return 0;
}
