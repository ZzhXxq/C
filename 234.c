#include <stdio.h>

int main(){
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  int d, e, f;
  int i;
  for (i = -100000; i <= 100000; i++){
    if (i * i * i + a * i * i + b * i + c == 0)
      break;
  }
  f = -i;
  for (i ; i <= 100000; i++){
    if (i * i  + (a - f) * i  + b - a * f + f * f == 0)
      break;}
  e = -i;
  d = a - e - f;
  printf("%d %d %d", d, e, f); 
  return 0;
}
