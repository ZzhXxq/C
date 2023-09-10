#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);    
  int zero = 0, one = 0, two = 0;
  for (int i = 0; i < n; i++){
    int x;
    scanf("%d", &x);
    int y = x % 3;
    switch (y) {
    case 0:
      zero++;
      break;
    case 1:
      one++;
      break;
    case 2:
      two++;
      break;
    }
  }
  printf("%d %d %d\n", zero, one, two);
  return 0;
}
