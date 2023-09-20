#include <stdio.h>
#include <stdbool.h>

int main(){
  int map[3][3] = {0};
  int n;
  scanf("%d", &n);
  int x[n], y[n];
  for (int i = 0; i < n; i++)
    scanf("%d%d", x[i], y[i]);
  int N = 1;
  for (int i = 0; i < n; i++){
    if (x[i] >= 3 && x[i] < 0 && y[i] >= 3 && y[i] < 0 || map[x[i]][y[i]] != 0)
      continue;
    if (count % 2 == 1)
      map[x[i]][y[i]] = 1;
    } else 
      map[x[i]][y[i]] = 2;
      N++;
  }
  
  return 0;
}
