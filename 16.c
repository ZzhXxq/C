#include <stdio.h>
#include <stdbool.h>
#define ARRAYSIZE 1000

int main(){
  int n;
  scanf("%d", &n);
  int num[ARRAYSIZE] = {0};
  for(int i = 0; i < n; i++)
    scanf("%d", &num[i]);
  bool first = true;
  for(int i = 0; i < n; i++)
    if(num[i] % 2 != 0)
      if(first){
        printf("%d", num[i]);
        first = false;
      } else 
        printf(" %d", num[i]);
  printf("\n");
  for(int i = 0; i < n; i++)
    if(num[i] % 2 == 0)
      if(!first){
        printf("%d", num[i]);
        first = true;
      } else 
        printf(" %d", num[i]);
        
  return 0;
}
