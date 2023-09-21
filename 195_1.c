#include <stdio.h>
#include <stdbool.h>

int main(){
  int map[3][3] = {0};
  int n;
  scanf("%d", &n);
  int x, y;
  int count = 1, win = 0;
  for (int i = 0; i < n && (win == 0) && count <= 9; i++){
    scanf("%d%d", &x, &y);
    if (x > 2 || x < 0 || y > 2 || y < 0 || map[x][y] != 0)
      continue;
    if (count % 2 == 1)
      map[x][y] = 1;
    else 
      map[x][y] = 2;
    count++;
    if (map[x][0] == map[x][1] && map[x][1] == map[x][2])
      win = map[x][y];
    if (map[0][y] == map[1][y] && map[2][y] == map[1][y])
      win = map[x][y];
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
