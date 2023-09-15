#include <stdio.h>

int main(){
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  int d, e, f;
  int i;
  for (i = -10000; i <= 10000; i++){
    if (i * i * i + a * i * i + b * i + c == 0)
      break;
  }
  f = -i;
  for (i ; i <= 10000; i++){
    if (i * i  + (a - f) * i  + b - a * f + f * f == 0)
      break;}
  e = -i;
  d = a - e - f;
  if (d * e * f != c){
    for (i = 1; i <= 100000; i++){
      if (i * i * i + a * i * i + b * i + c == 0)
        break;
    }
    f = -i;
    for (i ; i <= 100000; i++){
      if (i * i  + (a - f) * i  + b - a * f + f * f == 0)
        break;
    }
    e = -i;
    d = a - e - f;
  }
  if (d > f){
    int tmp = d;
    d = f;
    f = tmp;
  }
  printf("%d %d %d", d, e, f); 
  return 0;
}
