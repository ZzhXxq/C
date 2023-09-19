#include <stdio.h>
#include <stdbool.h>
int main(){
  int M, N, x1, y1, E1, N1, F1, x2, y2, E2, N2, F2;
  bool unexplode = true;
  scanf("%d%d%d%d%d%d%d%d%d%d%d%d", &M, &N, &x1, &y1, &E1, &N1, &F1, &x2, &y2, &E2, &N2, &F2);
  int t;
  for (t = 0; unexplode && (F1 != 0 || F2 != 0); t++){
    if (x1 == x2 && y1 == y2){
      unexplode = false;
      continue;
    }
    if (F1 != 0){
      if (t % (N1 + E1) < N1){
        y1++; y1 %= N;
      } else{
        x1++; x1 %= M;
      }
      F1--;
    }
    
    if (F2 != 0){
      if (t % (N2 + E2) < E2){
        x2++; x2 %= M;
      } else{
        y2++; y2 %= N;
      }
      F2--;
    }     
  }
  if (unexplode)
    printf("robots will not explode\n");
  else
    printf("robots explode at time %d\n", t-1);
  return 0;
}
