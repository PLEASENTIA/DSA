#include "UserInput.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h> //for random values feature
#include <time.h>   //for random values feature
#define LENGTH 10
void Random(int *arr);
int main() {
  srand(time(NULL));
  int index, swapped;
  int arr[LENGTH];
  UserInputArray(arr, LENGTH);
  PrintChoice(arr, -1, LENGTH);
  printf("BUBBLE SORT");
  for (int j = 0; j < LENGTH; j++) {
    swapped = 0;
    for (int i = 0; i < LENGTH - j - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        swapped = 1;
      }
    }
    if (swapped == 0) {
      break;
    }
  }
  printf("\nSorted Array: ");
  for (int i = 0; i < LENGTH; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n--------------------------------------------------------------\n");
  return 0;
}
