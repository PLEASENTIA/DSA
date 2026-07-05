#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> //for random values feature
#include <time.h> //for random values feature
#define LENGTH 10
void Random(int *arr);
int main(){
  srand(time(NULL));
  int index;
  int arr[LENGTH];
  Random(arr);
  printf("BUBBLE SORT");
  for(int j=0; j<LENGTH; j++){
    for(int i=0; i<LENGTH-j-1; i++){
      if(arr[i]>arr[i+1]){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
      }
    }
  }
  printf("\nSorted Array: ");
  for(int i=0; i<LENGTH; i++){
    printf("%d ", arr[i]);
  }
  printf("\n--------------------------------------------------------------\n");
  return 0;
}
//Random Values Assigner
void Random(int *arr){
  int Option1, Option2;
  //Array choosing
  while(1){
    printf("--------------------------------------------------------------\n");
    printf("Enter the elements in array:\n1 - Manual\t2 - Random\nChoose: ");
    scanf("%d", &Option1);
    if(Option1==1){
      printf("Enter elements separated with spaces(Max 10 elements): ");
      for(int i=0; i<LENGTH; i++){
        scanf("%d", &arr[i]);
      }
      break;
    }
    else if(Option1==2) {
      for(int i=0; i<LENGTH; i++){
        arr[i]=rand()%100;
      }
      break;
    }
    else{
      printf("Choose from options.\n");
      continue;
    }
    printf("--------------------------------------------------------------\n");
  }
  //Printing Choices
  printf("--------------------------------------------------------------\n");
  printf("Array: ");
  for(int i=0; i<LENGTH; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
  printf("--------------------------------------------------------------\n");
}
