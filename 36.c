#include <stdio.h>

int main(){
  int year, month, day;
  scanf("%d%d%d", &year, &month, &day);
  int days;
  switch (month){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
      days = 31;
      break;
    case 4: case 6: case 9: case 11:
      days = 30;
      break;
    case 2:
      if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        days = 29;
      else
        days = 28;
  }
  if (month < 1 || month > 12 || day < 0 || day > 6)
    printf("invalid\n");
  else{
    printf(" Su Mo Tu We Th Fr Sa\n");
    printf("=====================\n");
    for (int i = 0; i < day; i++)
      printf("   ");
    for (int i = 1; i <= days; i++){
      printf("%3d", i);
      if (day == 6)
        printf("\n");
      day = (day + 1) % 7;
      printf("\n=====================\n");
    }
  }
    return 0;
  
}
