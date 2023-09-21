#include <stdio.h>
#include <stdbool.h>
#define PLAYER 10
#define LENGTH 256

int main(){
  int n, m;
  scanf("%d%d", &n, &m);
  int player[PLAYER][LENGTH][LENGTH];
  for (int p = 0; p < n; p++){
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
      bool chose = true;
      for (int r = 0; r < m; r++){
        bool chose = true; 
        for (int c = 0; c < m && chose; c++){
          if (player[p][r][c] != 0)
            chose = false;
        }
      }
      if (chose){
        printf("%d ", num, name[p]);
        bingo = true;
      }  
    }
  }
  return 0;
}
