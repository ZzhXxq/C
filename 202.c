#include <stdio.h>
#define ADD 0
#define SUB 1
#define MUL 2
#define DIV 3

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
    case SUB:
      top = newb * g - newf * c;
      bottom = c * g;
      break;
    case MUL:
      top = newb * newf;
      bottom = c * g;
      break;
    case DIV:
      top = newb * g;
      bottom = c * newf;
      if (bottom < 0){
        top = -top;
        bottom = -bottom;
      }
      break;
  }
  int A = (top > 0)? top : -top;
  int B = bottom;
  while(A % B != 0){
    int tmp = A % B;
    A = B;
    B = tmp;
  }
  /*接下來要約分*/
  top /= B;
  bottom /= B;
  /*除出整數part並將分數part轉正*/
  int h = top / bottom;
  int i = (top > 0)? top % bottom : -(top % bottom);
  int j = bottom;
  if (i == 0)
    j = 1;
  /*輸出*/
  printf("%d\n%d\n%d\n", h, i, j);
  return 0;
}
