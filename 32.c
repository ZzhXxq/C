#include <stdio.h>
#define LEFT 0
#define RIGHT 1
#define LENGTH 2

void findpal_jump(int arr[100], int i, int index, int pal[200][3], int n){
  int j = 1;
  while ((i - j >= 0) && (i + j < n) && (arr[i - j] == arr[i + j]))
    j++;
  pal[index][LEFT] = i - (j - 1);
  pal[index][RIGHT] = i + (j - 1);
  pal[index][LENGTH] = (j - 1) * 2 + 1;
  index++;
}

void findpal_cts(int arr[100], int i, int pal[200][3], int n){
  int j = 0;
  while ((i - j >= 0) && (i + 1 + j < n) && (arr[i - j] == arr[i + 1 + j]))
    j++;
  if (j = 0) {
    pal[i][LEFT] = i;
    pal[i][RIGHT] = i;
    pal[i][LENGTH] = 1;
  } else {
    pal[i][LEFT] = i - j;
    pal[i][RIGHT] = i + j + 1;
    pal[i][LENGTH] = 2 * j + 2;
  }
}

int main(){
  int arr[100] = {0};
  int x, n = 0;
  while (scanf("%d", &x) != EOF){
    arr[n] = x;
    n++;
  }
  
  int pal[200][3] = {{0}}, index = 0;
  for (int i = 0; i < n; i++)
    findpal_cts(arr, i, pal, n);
  index = n;
  for (int i = 1; i < n - 1; i++)
    findpal_jump(arr, i, index, pal, n);
  int len = 0;
  int dou[2];
  for (int i = 0; i < index; i++)
    for (int j = 0; j < index; j++)
      if (pal[i][RIGHT] + 1 == pal[j][LEFT]){
        if (pal[i][LENGTH] + pal[j][LENGTH] > len){
          len = pal[i][LENGTH] + pal[j][LENGTH];
          dou[0] = i;
          dou[1] = j;
        } else if ((pal[i][LENGTH] + pal[j][LENGTH] == len) && (pal[dou[1]][RIGHT] > pal[j][RIGHT])){
          dou[0] = i;
          dou[1] = j;
        }
      }
  if (len == 0){
    dou[0] = 0;
    dou[1] = n - 1;
  }
  for (int t = pal[dou[0]][LEFT]; t <= pal[dou[1]][RIGHT]; t++)
  printf("%d%c", arr[t], (t == pal[dou[1]][RIGHT])? '\n': ' ');
  return 0;
}
