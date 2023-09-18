#include <stdio.h>
#include <stdlib.h>
int main(){
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  int d, e, f;
  int count = 0;
  for (long long int i = -100000; i <= 100000; i++){
    if (abs(i) > abs(c))
      continue;
    if(i == 0 || c % i == 0){
      if ((i*i*i + a*i*i + b*i + c) == 0){
        if (count == 0)
          f = -i;
        else if (count == 1)
          e = -i;
        else
          d = -i;
        count++;
      }
    }       
  }
  if (count == 3)
      printf("%d %d %d", d, e, f);
    else if (count == 1)
      printf("%d %d %d", f, f, f);
    else if (f * f * e == c)
      printf("%d %d %d", e, f, f);
    else
      printf("%d %d %d", e, e, f);
  return 0;
}
