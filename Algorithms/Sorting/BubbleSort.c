#include <stdio.h>
#define n 10
int main(){
  int arr[n]={11, 22, 32, 10, 9, 20, 5, 3, 40, 90};
  for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
  for(int j=0; j<n; j++){
    for(int i=0; i<n-j-1; i++){
      if(arr[i]>arr[i+1]){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
      }
    }
  }
  for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
  }
  return 0;
}
