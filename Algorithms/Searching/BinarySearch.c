#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> //for random values feature
#include <time.h> //for random values feature
#define LENGTH 10
void Random(int *arr, int *element);
void SortArray(int *arr);
int main(){
  srand(time(NULL));
  int element, index, mid, high, low;
  int arr[LENGTH];
  bool found=false;
  Random(arr, &element);
  printf("BINARY SEARCH");
  high=LENGTH-1;
  low=0;

  while (low<=high) {
    mid=low+(high-low)/2;
    if(arr[mid]==element){
      found=true;
      index=mid;
      break;
    }
    else if(element>arr[mid]){
      low=mid;
    }
    else if(element<arr[mid]){
      high=mid;
    }
  }
  if(found){
    printf("\nFound element %d at index %d.\n", element, index);
  }
  else{
    printf("\nElement %d not found in the array.\n", element);
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
  SortArray(arr);
  //Printing Choices
  printf("--------------------------------------------------------------\n");
  printf("Array: ");
  for(int i=0; i<LENGTH; i++){
    printf("%d ", arr[i]);
  }
  printf("\nElement: %d\n", *element);
  printf("--------------------------------------------------------------\n");
}
//Bubble Sort
void SortArray(int *arr){
  for(int j=0; j<LENGTH; j++){
    for(int i=0; i<LENGTH-j-1; i++){
      if(arr[i]>arr[i+1]){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
      }
    }
  }
}
