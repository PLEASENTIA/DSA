#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> //for random values feature
#include <time.h> //for random values feature
#define LENGTH 10
void Random(int *arr, int *element);
int main(){
  srand(time(NULL));
  int element, index;
  int arr[LENGTH];
  bool found=false;
  Random(arr, &element);
  printf("LINEAR SEARCH");
  for(int i=0; i<LENGTH; i++){
    if(arr[i]==element){
      found=true;
      index=i;
      break;
    }
  }
  if(found){
    printf("\nElement %d found at index %d.\n", element, index);
  }
  else{
    printf("\nElement not found in the array.\n");
  }
  printf("--------------------------------------------------------------\n");
  return 0;
}
//Random Values Assigner
void Random(int *arr, int *element){
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
  //Element choosing
  while(1){
    printf("--------------------------------------------------------------\n");
    printf("Enter the element to search for:\n1 - Manual\t2 - Random\nChoose: ");
    scanf("%d", &Option2);
    if(Option2==1){
      printf("Enter the element to search for: ");
      scanf("%d", &(*element));
      break;
    }
    else if(Option2==2) {
      *element=arr[rand() % LENGTH];
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
  printf("\nElement: %d\n", *element);
  printf("--------------------------------------------------------------\n");
}
