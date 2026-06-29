#include <stdio.h>
#include <stdbool.h>
#define LENGTH 5
int main(){
  int arr[LENGTH]={1,2,10,4,5};
  int element=10;
  bool found=false;
  int index;
  printf("Element to find: %d\n", element);
  printf("Array: ");
  for(int i=0; i<LENGTH; i++){
    printf("%d ", arr[i]);
  }
  for(int i=0; i<LENGTH; i++){
    if(arr[i]==element){
      found=true;
      index=i;
      break;
    }
  }
  if(found){
    printf("\nElement %d found at index %d.", element, index);
  }
  else{
    printf("\nElement not found in the array.");
  }
  return 0;
}
