#include <stdio.h>

int main(){
  int year, week, n;
  scanf("%d%d%d", &year, &week, &n);
  for (int i = 0; i < n; i++){
    int month, day;
    scanf("%d%d", &month, &day);
    int ans = day - 1;
    if (month > 12 || month < 1){
      printf("-1\n");
      continue;
    }
    for (int j = 1; j <= month; j++){
      int sumday;
      switch (j){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
          sumday = 31;
          break;
        case 4: case 6: case 9: case 11:
          sumday = 30;
          break;
        case 2:
          if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            sumday = 29;
          else
            sumday = 28;
      }
      if (j != month)
        ans += sumday;
      else{
        if (day < 1 || day > sumday)
          ans = -2;
        else 
          ans %= 7;
      }
    }
    printf("%d\n", ans);
  }
  return 0;
}
