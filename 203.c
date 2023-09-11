#include <stdio.h>

int main(){
  int X, Y, x1, y1, x2, y2, dx1, dy1, dx2, dy2, s;
  scanf("%d%d%d%d%d%d%d%d%d%d%d", &X, &Y, &x1, &y1, &x2, &y2, &dx1, &dy1, &dx2, &dy2, &s);
  for (int i = 0; i < s; i ++){
    x1 = x1 + dx1; y1 = y1 + dy1; x2 = x2 + dx2; y2 = y2 + dy2;
    if (x1 == X || x1 == 1)
      dx1 = -dx1;
    if (x2 == X || x2 == 1)
      dx2 = -dx2;
    if (y1 == Y || y1 == 1)
      dy1 = -dy1;
    if (y2 == Y || y2 == 1)
      dy2 = -dy2;
    if (x1 == x2 && y1 == y2){
      int tmpx = dx1, tmpy = dy1;
      dx1 = dx2; dy1 = dy2;
      dx2 = tmpx; dy2 = tmpy;
    } 
  }
  printf("%d\n%d\n%d\n%d\n", x1, y1, x2, y2);
  return 0;
}
