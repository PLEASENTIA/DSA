#include "UserInput.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h> //for random values feature
#include <time.h>   //for random values feature
#define LENGTH 10
void Divide(int arr[], int length);
void Conquer(int arr[], int arrLeft[], int arrRight[], int length, int middle);
int main() {
  srand(time(NULL));
  int index;
  int arr[LENGTH];
  UserInputArray(arr, LENGTH);
  PrintChoice(arr, -1, LENGTH);
  printf("MERGE SORT");
  Divide(arr, LENGTH);
  printf("\nSorted Array: ");
  for (int i = 0; i < LENGTH; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n--------------------------------------------------------------\n");
  return 0;
}

void Divide(int arr[], int length) {
  int middle = length / 2;
  if (length > 1) {
    int arrLeft[middle];
    int arrRight[length - middle];
    for (int i = 0; i < middle; i++) {
      arrLeft[i] = arr[i];
    }
    for (int i = 0; i < length - middle; i++) {
      arrRight[i] = arr[middle + i];
    }
    Divide(arrLeft, middle);
    Divide(arrRight, length - middle);
    Conquer(arr, arrLeft, arrRight, length, middle);
  }
}
void Conquer(int arr[], int arrLeft[], int arrRight[], int length, int middle) {
  int i = 0;
  int j = 0;
  int k = 0;
  while (i < middle && j < length - middle) {
    if (arrLeft[i] < arrRight[j]) {
      arr[k] = arrLeft[i];
      i++;
    } else {
      arr[k] = arrRight[j];
      j++;
    }
    k++;
  }
  while (i < middle) {
    arr[k] = arrLeft[i];
    i++;
    k++;
  }
  while (j < length - middle) {
    arr[k] = arrRight[j];
    j++;
    k++;
  }
}
