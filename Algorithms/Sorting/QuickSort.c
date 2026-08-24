#include "UserInput.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h> //for random values feature
#include <time.h>   //for random values feature
#define LENGTH 10
void QuickSort(int *arr, int l, int r);
int main(void) {
  srand(time(NULL));
  int arr[LENGTH];
  UserInputArray(arr, LENGTH);
  PrintChoice(arr, -1, LENGTH);
  printf("QUICK SORT");
  QuickSort(arr, 0, LENGTH - 1);
  printf("\nSorted Array: ");
  for (int i = 0; i < LENGTH; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n--------------------------------------------------------------\n");
  return 0;
}

void QuickSort(int *arr, int l, int r) {
  int low = l, high = r;
  int middle = l + (r - l) / 2;
  int pivot = arr[middle];
  while (l <= r) {
    while (arr[l] < pivot) {
      l++;
    }
    while (arr[r] > pivot) {
      r--;
    }
    if (l <= r) {
      int temp;
      temp = arr[l];
      arr[l] = arr[r];
      arr[r] = temp;
      l++;
      r--;
    }
  }
  if (low < r)
    QuickSort(arr, low, r);
  if (high > l)
    QuickSort(arr, l, high);
}
