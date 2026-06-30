#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Random();
int main(){
  Random();
  return 0;
}

int Random(){
  srand(time(NULL));
  int arr[10];
  int Option1, Option2;
  int element;
  //Array choosing
  while(1){
    printf("--------------------------------------------------------------\n");
    printf("Enter the elements in array:\n1 - Manual\t2 - Random\nChoose: ");
    scanf("%d", &Option1);
    if(Option1==1){
      printf("Enter elements separated with spaces(Max 10 elements): ");
      for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
      }
      break;
    }
    else if(Option1==2) {
      for(int i=0; i<10; i++){
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
      scanf("%d", &element);
      break;
    }
    else if(Option2==2) {
      element=arr[rand() % 10];
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
  for(int i=0; i<10; i++){
    printf("%d ", arr[i]);
  }
  printf("\nElement: %d\n", element);
  printf("--------------------------------------------------------------\n");
}
