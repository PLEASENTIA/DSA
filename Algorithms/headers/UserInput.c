#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h> //for random values feature
#include <time.h>   //for random values feature
int Option1, Option2;
// Random Values Assigner
void UserInputArray(int *arr, int LENGTH) {
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
}

void UserInputElement(int *arr, int *element, int LENGTH) {
  // Element choosing
  while (1) {
    printf("--------------------------------------------------------------\n");
    printf(
        "Enter the element to search for:\n1 - Manual\t2 - Random\nChoose: ");
    scanf("%d", &Option2);
    if (Option2 == 1) {
      printf("Enter the element to search for: ");
      scanf("%d", &(*element));
      break;
    } else if (Option2 == 2) {
      *element = arr[rand() % LENGTH];
      break;
    } else {
      printf("Choose from options.\n");
      continue;
    }
    printf("--------------------------------------------------------------\n");
  }
}

void PrintChoice(int arr[], int element, int LENGTH) {

  // Printing Choices
  printf("--------------------------------------------------------------\n");
  printf("Array: ");
  for (int i = 0; i < LENGTH; i++) {
    printf("%d ", arr[i]);
  }
  printf("\nElement: %d\n", element);
  printf("--------------------------------------------------------------\n");
}
