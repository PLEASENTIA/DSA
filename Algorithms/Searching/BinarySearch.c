#include "UserInput.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h> //for random values feature
#include <time.h>   //for random values feature
#define LENGTH 10
void SortArray(int *arr);
int main() {
  srand(time(NULL));
  int element, index, mid, high, low;
  int arr[LENGTH];
  bool found = false;
  UserInputArray(arr, LENGTH);
  UserInputElement(arr, &element, LENGTH);
  SortArray(arr);
  PrintChoice(arr, element, LENGTH);
  printf("BINARY SEARCH");
  high = LENGTH - 1;
  low = 0;

  while (low <= high) {
    mid = low + (high - low) / 2;
    if (arr[mid] == element) {
      found = true;
      index = mid;
      break;
    } else if (element > arr[mid]) {
      low = mid + 1;
    } else if (element < arr[mid]) {
      high = mid - 1;
    }
  }
  if (found) {
    printf("\nFound element %d at index %d.\n", element, index);
  } else {
    printf("\nElement %d not found in the array.\n", element);
  }

  printf("--------------------------------------------------------------\n");
  return 0;
}
void SortArray(int *arr) { // Bubble Sort
  for (int j = 0; j < LENGTH; j++) {
    for (int i = 0; i < LENGTH - j - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
  }
}
