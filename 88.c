#include <stdio.h>

int main(){
  int x, y;
  int A = 0, B = 0;
  scanf("%d%d", &x, &y);
  int tmp = y;
  for (int i = 1000; i >= 1; i /= 10){
    for(int j = 1000; j >= 1; j /= 10){
      if (i == j){
        if((x / i) == (y / i))
          A++;
      }else if ((x / i) == (y / j))
        B++;
      y %= j;
    }
    y = tmp;
    x %= i;
  }
  printf("%dA%dB\n", A, B);
  return 0;
}
