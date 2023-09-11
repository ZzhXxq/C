#include <stdio.h>

int main(){
  int spe_num, fst_num, num;
  scanf("%d%d", &spe_num, &fst_num);
  int sum = 0;
  while(scanf("%d", &num) != EOF){
    if (num == spe_num)
      sum += 2000000;
    else if (num == fst_num)
      sum += 200000;
    else if (num % 10000000 == fst_num % 10000000)
      sum += 40000;
    else if (num % 1000000 == fst_num % 1000000)
      sum += 10000;
    else if (num % 100000 == fst_num % 100000)
      sum += 4000;
    else if (num % 10000 == fst_num % 10000)
      sum += 1000;
    else if (num % 1000 == fst_num % 1000)
      sum += 200;
  }
  printf("%d", sum);
  return 0;
}
