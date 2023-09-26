#include <stdio.h>

int main(){
  int arr[100] = {0};
  int x, int n = 0;
  while (scanf("%d", &x) != 0){
    arr[n] = x;
    n++;
  }
  for (int i = 0; i <= n; i++){
    if(arr[i] == arr[i+2]){
      
    }
    if(arr[i] == arr[i+1]){
      
    }  
  }
  return 0;
}
