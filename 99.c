#include <stdio.h>
#include <stdbool.h>
#define PLAYER 10
#define LENGTH 256
#define NAME 64

int main(){
  int n, m;
  scanf("%d%d", &n, &m);
  /*未完成：宣告字串*/
  int player[PLAYER][LENGTH][LENGTH];
  for (int p = 0; p < n; p++){
    /*未完成：輸入名字*/  
    for (int r = 0; r < m; r++){
      for (int c = 0; c < m; c++)
        scanf("%d", &player[p][r][c]);
    }
  }
  bool bingo = false;
  for (int i = 0; i < m * m && !bingo; i++){
    int num;
    scanf("%d", &num);
    for (int p = 0; p < n; p++){
      for (int r = 0; r < m; r++){
        for (int c = 0; c < m; c++){
          if (num == player[p][r][c]){
            player[p][r][c] = 0;
            break;
          }
        }
      }
    }
    for (int p = 0; p < n; p++){
      int chose = 0;
      for (int r = 0; r < m; r++){
        chose = 0; 
        for (int c = 0; c < m; c++)
          chose += player[p][r][c];
        if (chose == 0 && !bingo){
          printf("%d ", num);
          bingo = true;
        }
        if (chose == 0){
          /*未完成：輸出名字*/
          break;
        }    
      }
    }
  }
  return 0;
}
