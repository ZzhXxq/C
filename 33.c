#include <stdio.h>
#define edge 102

int main(){
  int n; 
  scanf("%d", &n);
  int city[edge][edge] = {0};
  for (int i = 1; i < n + 1; i++){
    for (int j = 1; j < n + 1; j++)
      scanf("%d", &city[i][j]);
  }
  int intersec = 0, T_junc = 0, turn = 0, dead = 0;
  for (int i = 1; i < n + 1; i++){
    for (int j = 1; j < n + 1; j++){
      if (city[i][j] == 0)
        continue;
      int roads[4] = {0};
      int road = 0;
      int di[4] = {0, 1, 0, -1};
      int dj[4] = {-1, 0, 1, 0};
      for (int k = 0; k < 4; k++){
        if (city[i +di[k]][j + dj[k]] == 1){
          roads[k] = 1;
          road++;
        }
      }
      if (road == 4)
        intersec++;
      else if (road == 3)
        T_junc++;
      else if (road == 2){
        if (roads[0] != roads[2])
          turn++;
      }
      else if (road == 1)
        dead++;
    }
  }
  printf("%d\n%d\n%d\n%d\n", intersec, T_junc, turn, dead);
  return 0;
}
