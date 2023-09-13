#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int px[n], py[n], cmost[n];
  for (int i = 0; i < n; i++)
    scanf("%d%d%d", &px[i], &py[i], cmost[n]);
  int m, bx, by;
  int cnow[n] = {0};
  scanf("%d", &m);
  for(int j = 0; j < m; j++){
    scanf("%d%d", &bx, &by);
    int p = 0;
    int d = (bx[j] - px[0]) + (by[j] - py[0]);
    for (int i = 0; i < n; i++){
      int dnew = (bx[j] > px[i]? bx[j] - px[i] : px[i] - bx[j]);
      dnew += (by[j] > py[i]? by[j] - py[i] : py[i] - by[j]);
      if(d > dnew && cnow[i] < cmost[i]){
        d = dnew;
        p = i;
      }  
    }
    cnow[i]++;
  }
    
  return 0;
}
