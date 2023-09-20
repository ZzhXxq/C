#include <stdio.h>
#define SIZE 102

int main(){
  int n;
  scanf("%d", &n);
  int city[SIZE][SIZE];
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++)
      scanf("%d", &city[i][j]);
  }
  int inter = 0, T_junc = 0, turn = 0, dead = 0;

  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++){
      if (city[i][j] == 0)
        continue;
      int road = city[i - 1][j] + city[i + 1][j] + city[i][j - 1] + city[i][j + 1];
      switch(road){
        case 1:
          dead++;
          break;
        case 2:
          if (city[i - 1][j] != city[i + 1][j])
            turn++;
          break;
        case 3:
          T_junc++;
          break;
        case 4:
          inter++;
          break;
      }
    } 
  }
  printf("%d\n%d\n%d\n%d\n", inter, T_junc, turn, dead);
  return 0;
}
