#include <stdio.h>
#define ADD 0

int main(){
  int a, b, c, d, e, f, g;
  scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g);
  int newb = (a > 0)? a * c + b : a * c - b;
  int newf = (e > 0)? e * g + f : e * g - f;
  int top, bottom;
  switch(d){
    case ADD:
      top = newb * g + newf * c;
      bottom = c * g;
      break;
  }
  /*接下來要約分*/
  /*除出整數part並將分數part轉正*/
  /*輸出*/
  return 0;
}
