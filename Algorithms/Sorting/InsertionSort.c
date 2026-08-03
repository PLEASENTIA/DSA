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
  printf("INSERTION SORT");
  for (int i = 1; i < LENGTH; i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && key < arr[j]) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
  printf("\nSorted Array: ");
  for (int i = 0; i < LENGTH; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n--------------------------------------------------------------\n");
  return 0;
}
