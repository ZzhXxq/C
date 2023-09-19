#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int num[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &num[i]);
  int m;
  scanf("%d", &m);
  for (int j = 0; j < m; j++){
    int count = 0;
    for (int i = 0; i < n; i++){
      if (num[i] % m == j)
        count++;
    }
    printf("%d\n", count);
  }
  return 0;
}
