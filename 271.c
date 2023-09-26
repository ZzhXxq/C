#include <stdio.h>
#define COE 100
int main(){
  int poly[2][COE];
  
  int n;
  scanf("%d", &n);
  for(int j = 0; j < n; j++)
    scanf("%d", &(poly[0][j]));

  int m;
  scanf("%d", &m);
  for(int j = 0; j < m; j++)
    scanf("%d", &(poly[1][j]));
  
  int mul[COE * COE] = {0};
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      mul[i + j] += poly[0][i] * poly[1][j];
  for (int i = 0; i < n + m - 1; i++)
    printf("%d ", mul[i]);
  return 0;
}
