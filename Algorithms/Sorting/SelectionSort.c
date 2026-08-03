#include "UserInput.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h> //for random values feature
#include <time.h>   //for random values feature
#define LENGTH 10
int main() {
  srand(time(NULL));
  int index;
  int arr[LENGTH];
  UserInputArray(arr, LENGTH);
  PrintChoice(arr, -1, LENGTH);
  printf("SELECTION SORT");
  for (int i = 0; i < LENGTH; i++) {
    int min = i;
    for (int j = i; j < LENGTH; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }
  printf("\nSorted Array: ");
  for (int i = 0; i < LENGTH; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n--------------------------------------------------------------\n");
  return 0;
}
