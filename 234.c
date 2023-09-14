#include <stdio.h>

int main(){
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  int d, e, f;
  int i = -100000;
  while (i *(a - i) + c / i != b)
    i ++;
  d = i;
  while(c / (d * i) != a - d - i)
    i++;
  f = i;
  e = a - d - f;  
  
  printf("%d %d %d", d, e, f);
  return 0;
}
