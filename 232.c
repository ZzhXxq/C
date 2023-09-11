#include <stdio.h>

int main(){
  int year, week, n;
  scanf("%d%d%d", &year, &week, &n);
  int month, day;
  for(int i = 0; i < n; i++){
    scanf("%d%d", &month, &day);
    if (month < 1 || month > 12){
      printf("-1\n");
      continue;
    }else if (day < 1 || day > 31){
      printf("-2\n");
      continue;
    }  //未完成條件
    
    int sum = day - 1;
    for(int j = 1; j < month; j++){  
      switch (j){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
          sum += 31;
          break;
        case 4: case 6: case 9: case 11:
          sum += 30;
          break;
        case 2:
          if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            sum += 29;
          else
            sum += 28;
          break;
      }    
    }
    int ans = (week + sum) % 7;
    printf("%d\n", ans);
  }
  return 0;
}
