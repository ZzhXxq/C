#include <stdio.h>

int main(){
  int x, y;
  int xmax = -10000, xmin = 10000, ymax = -10000, ymin = 10000;
  while (scanf("%d%d", &x, &y) != EOF){
    xmax = (x > xmax? x: xmax);
    xmin = (x > xmin? xmin: x);
    ymax = (y > ymax? y: ymax);
    ymin = (y > ymin? ymin: y);
  }
  printf("%d\n",  (xmax - xmin) * (ymax - ymin));
  return 0;
}
