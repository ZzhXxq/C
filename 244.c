#include <stdio.h>

int main(){
  int spe_num[3], fst_num[3], num;
  for (int i = 0; i < 3; i++)
    scanf("%d", &spe_num[i]);
  for (int i = 0; i < 3; i++)
    scanf("%d", &fst_num[i]);
  int sum = 0;
  
  while(scanf("%d", &num) != EOF){
    if (num == spe_num[0] || num == spe_num[1] || num == spe_num[2])
      sum += 2000000;
    else{
      for (int i = 0; i < 3; i++){
        if (num == fst_num[i])
          sum += 200000;
        else if (num % 10000000 == fst_num[i] % 10000000)
          sum += 40000;
        else if (num % 1000000 == fst_num[i] % 1000000)
          sum += 10000;
        else if (num % 100000 == fst_num[i] % 100000)
          sum += 4000;
        else if (num % 10000 == fst_num[i] % 10000)
          sum += 1000;
        else if (num % 1000 == fst_num[i] % 1000)
          sum += 200;
      }
    }
  }
  printf("%d", sum);
  return 0;
}
