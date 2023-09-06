#include <stdio.h>

int main(){
  int x, score;
  scanf("%d", &x);
  if(x <= 0)
    score = -100;
  else{
    score = (x % 3 == 0)? score + 3 : score;
    score = (x % 5 == 0)? score + 5 : score;
    score = (x >= 100 && x <= 200)? score + 50 : score - 50;
  }  
  printf("%d\n", score);
  return 0;
}
