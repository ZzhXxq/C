#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    int x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%d%d%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
    if((x2-x1)*(y3-y1) - (y2-y1)*(x3-x1) < 0){
      int tempx = x2;
      int tempy = y2;
      x2 = x3;
      y2 = y3;
      x3 = tempx;
      y3 = tempy;
    }
    if((x3-x1)*(y4-y1) - (y3-y1)*(x4-x1) < 0){
      int tempx = x3;
      int tempy = y3;
      x3 = x4;
      y3 = y4;
      x4 = tempx;
      y4 = tempy;
    }
    if((x2-x1)*(y3-y1) - (y2-y1)*(x3-x1) < 0){
      int tempx = x2;
      int tempy = y2;
      x2 = x3;
      y2 = y3;
      x3 = tempx;
      y3 = tempy;
    }
    int a = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
    int b = (x3-x2)*(x3-x2) + (y3-y2)*(y3-y2);    
    int c = (x3-x4)*(x3-x4) + (y3-y4)*(y3-y4);    
    int d = (x1-x4)*(x1-x4) + (y1-y4)*(y1-y4);    
    int e = (x1-x3)*(x1-x3) + (y1-y3)*(y1-y3);    
    int f = (x2-x4)*(x2-x4) + (y2-y4)*(y2-y4);    
    if(a == b && b == c && c == d){
      if(a + b == e && b + c == f)
        printf("square");
      else
        printf("diamond");
    } else if(a + b == e && b + c == f)
      printf("rectangle");
    else
      printf("other");
  } 
  return 0;
}
