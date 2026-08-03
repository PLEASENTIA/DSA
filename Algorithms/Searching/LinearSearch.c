#include "UserInput.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h> //for random values feature
#include <time.h>   //for random values feature
#define LENGTH 10
int main() {
  srand(time(NULL));
  int element, index;
  int arr[LENGTH];
  bool found = false;
  UserInputArray(arr, LENGTH);
  UserInputElement(arr, &element, LENGTH);
  PrintChoice(arr, element, LENGTH);
  printf("LINEAR SEARCH");
  for (int i = 0; i < LENGTH; i++) {
    if (arr[i] == element) {
      found = true;
      index = i;
      break;
    }
  }
  if (found) {
    printf("\nElement %d found at index %d.\n", element, index);
  } else {
    printf("\nElement not found in the array.\n");
  }
  printf("--------------------------------------------------------------\n");
  return 0;
}
