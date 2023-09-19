#include <stdio.h>
#define ARRAYSIZE 1000

int main(){
  int n;
  scanf("%d", &n);
  int num[ARRAYSIZE] = {0};
  for (int i = 0; i < n; i++)
    scanf("%d", &num[i]);
  for (int i = n - 1; i >= 0; i--)
    printf("%d ", num[i]);
  return 0;
}
