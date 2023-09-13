#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int px[n], py[n], cmost[n], cnow[n];
  for (int i = 0; i < n; i++){
    scanf("%d%d%d", &px[i], &py[i], &cmost[i]);
    cnow[i] = 0;
  }
  int m, bx, by;
  scanf("%d", &m);
  for(int j = 0; j < m; j++){
    scanf("%d%d", &bx, &by);
    int p = 0;
    while (cnow[p] == cmost[p])
      p++;
    int d = (bx > px[p]? bx - px[p] : px[p] - bx);
    d += (by > py[p]? by - py[p] : py[p] - by);
    for (int i = 0; i < n; i++){
      int dnew = (bx > px[i]? bx - px[i] : px[i] - bx);
      dnew += (by > py[i]? by - py[i] : py[i] - by);
      if(d > dnew && cnow[i] < cmost[i]){
        d = dnew;
        p = i;
      }  
    }
    cnow[p]++;
  }
  for (int i = 0; i < n; i++)
    printf("%d\n", cnow[i]);  
  return 0;
}
