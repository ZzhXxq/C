#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    int x1, y1, x2, y2, x3, y3;
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    int a = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    int b = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
    int c = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
    if(a == b || a == c || b == c)
      printf("isosceles\n");
    else if(a + b == c || b + c == a || a + c == b)
      printf("right\n");
    else if(a + b < c || a + c < b || b + c < a )
      printf("obtuse\n");
    else
      printf("acute\n");
  }
  return 0;
}
