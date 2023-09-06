#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  for(int i = 1; i <= n; i++){
    int x1, y1, x2, y2, x3, y3;
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    int asqu = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
    int bsqu = (x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3);
    int csqu = (x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2);
    int max, mid, min;
    if(asqu > bsqu){
      max = asqu;
      min = bsqu; 
    } else {
      max = bsqu;
      min = asqu; 
    }
    if(csqu > max){
      mid = max;
      max = csqu;
    } else if(csqu < max && csqu > min)
      mid = csqu;
    else {
      mid = min;
      min = csqu;
    }
    if(mid == min)
      printf("isosceles\n");
    else if(mid + min == max)
      printf("right\n");
    else if(mid + min < max)
      printf("obtuse\n");
    else
      printf("acute\n");
  }  
  return 0;
}
