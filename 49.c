#include <stdio.h>
#define DIV 1000
#define SUM 0
#define MAX 1
#define MIN 2

int main(){
  int n, m;
  scanf("%d%d", &n, &m);
  int arr[DIV][3] = {{0}};
  for (int i = 0; i < DIV; i++)
    arr[i][MIN] = 10000;
  for(int i = 0; i < n; i++){
    int num;
    scanf("%d", &num);
    int index = num % m;
    arr[index][SUM] += num;
    arr[index][MAX] = (arr[index][MAX] > num? arr[index][MAX]: num);
    arr[index][MIN] = (arr[index][MIN] < num? arr[index][MIN]: num);
  }
  for (int i = 0; i < m; i++)
    for (int j = 0; j < 3; j++)
      printf("%d%c", arr[i][j], (j == 2)? '\n': ' ');
  return 0;
}
