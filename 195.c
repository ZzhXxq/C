#include <stdio.h>
#include <stdbool.h>

int main(){
  int map[3][3] = {0};
  int n;
  scanf("%d", &n);
  int x[n], y[n];
  for (int i = 0; i < n; i++)
    scanf("%d%d", x[i], y[i]);
  
  return 0;
}
