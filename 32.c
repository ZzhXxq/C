#include <stdio.h>

int main(){
  int arr[100] = {0};
  int x, int n = 0;
  while (scanf("%d", &x) != 0){
    arr[n] = x;
    n++;
  }
  int left, right, lengh;
  for (int i = 0; i <= n; i++){
    if(arr[i] == arr[i+2]){
      for (int j = 0; ;j++)
        if (i + j <= n && i - j >= 0 && arr[i-j] == arr[i+2+j]){
          left = i - j;
          right = i + 2 + j;
        }
      lenth = right - left + 1;
      
    }
    if(arr[i] == arr[i+1]){
      
    }  
  }
  return 0;
}
