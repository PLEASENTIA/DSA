#include "UserInput.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h> //for random values feature
#include <time.h>   //for random values feature
#define LENGTH 10
void Random(int *arr);
int main() {
  srand(time(NULL));
  int index;
  int arr[LENGTH];
  UserInputArray(arr, LENGTH);
  PrintChoice(arr, -1, LENGTH);
  printf("BUBBLE SORT");
  for (int j = 0; j < LENGTH; j++) {
    for (int i = 0; i < LENGTH - j - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
  }
  printf("\nSorted Array: ");
  for (int i = 0; i < LENGTH; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n--------------------------------------------------------------\n");
  return 0;
}
