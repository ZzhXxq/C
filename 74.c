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
    bool noFound = true;
    for (int j = 0; j < m && noFound; j++)
      if (num[i] % m == j){
        count[j]++;
        noFound = false;
      }
  }
  for (int j = 0; j < m; j++)
    printf("%d\n", count[j]);
  /*for (int j = 0; j < m; j++){
    int count = 0;
    for (int i = 0; i < n; i++){
      if (num[i] % m == j)
        count++;
    }
    printf("%d\n", count);
  }*/
  return 0;
}
