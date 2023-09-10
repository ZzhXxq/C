#include <stdio.h>

int main(){
  int a, b, c, d, e;
  scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
  int A = a-2*e;
  int B = b-2*e;
  int C = c-2*e;
  int sur = (a*c + b*c + a*b) * 2 + (A+B+C)*8*d;
  int vol = a*b*c - (A*B + B*C + A*C)*2*d;
  printf("%d\n%d\n", sur, vol);
  return 0;
}
