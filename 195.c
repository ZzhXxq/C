#include <stdio.h>
#include <stdbool.h>

int main(){
  int map[3][3] = {0};
  int n;
  scanf("%d", &n);
  int x[n], y[n];
  for (int i = 0; i < n; i++)
    scanf("%d%d", &x[i], &y[i]);
  int count = 1;
  int win = 0;
  for (int i = 0; i < n && (win == 0) && count <= 9; i++){
    if (x[i] >= 3 && x[i] < 0 && y[i] >= 3 && y[i] < 0 || map[x[i]][y[i]] != 0)
      continue;
    if (count % 2 == 1)
      map[x[i]][y[i]] = 1;
    else 
      map[x[i]][y[i]] = 2;
      count++;
    if (map[x[i]][0] == map[x[i]][1] && map[x[i]][1] == map[x[i]][2])
      win = map[x[i]][y[i]];
    if (map[0][y[i]] == map[1][y[i]] && map[2][y[i]] == map[1][y[i]])
      win = map[x[i]][y[i]];
    if ((map[0][0] == map[1][1] && map[1][1] == map[2][2]) || (map[0][2] == map[1][1] && map[1][1] == map[2][0]))
      win = map[1][1];
  }
  if (win == 1)
    printf("Black wins.");
  else if (win == 2)
    printf("White wins.");
  else
    printf("There is a draw.");
  return 0;
}
