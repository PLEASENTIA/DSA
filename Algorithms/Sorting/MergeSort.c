#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h> //for random values feature
#include <time.h>   //for random values feature
#define LENGTH 10
void Random(int *arr);
void Divide(int arr[], int length);
void Conquer(int arr[], int arrLeft[], int arrRight[], int length, int middle);
int main() {
  srand(time(NULL));
  int index;
  int arr[LENGTH];
  Random(arr);
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
// Random Values Assigner
void Random(int *arr) {
  int Option1, Option2;
  // Array choosing
  while (1) {
    printf("--------------------------------------------------------------\n");
    printf("Enter the elements in array:\n1 - Manual\t2 - Random\nChoose: ");
    scanf("%d", &Option1);
    if (Option1 == 1) {
      printf("Enter elements separated with spaces(Max 10 elements): ");
      for (int i = 0; i < LENGTH; i++) {
        scanf("%d", &arr[i]);
      }
      break;
    } else if (Option1 == 2) {
      for (int i = 0; i < LENGTH; i++) {
        arr[i] = rand() % 100;
      }
      break;
    } else {
      printf("Choose from options.\n");
      continue;
    }
    printf("--------------------------------------------------------------\n");
  }
  // Printing Choices
  printf("--------------------------------------------------------------\n");
  printf("Array: ");
  for (int i = 0; i < LENGTH; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  printf("--------------------------------------------------------------\n");
}
