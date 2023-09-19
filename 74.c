#include <stdio.h>
#include <stdbool.h>
#define mSIZE 200000
int main(){
  int n;
  scanf("%d", &n);
  int num[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &num[i]);
  int m;
  scanf("%d", &m);
  int count[mSIZE] = {0};
  for (int i = 0; i < n; i++){
    int j = num[i] % m;
    count[j]++;
  }
  for (int i = 0; i < m; i++)
    printf("%d\n", count[i]);
  return 0;
}
