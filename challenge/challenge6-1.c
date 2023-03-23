/*

* challenge6-1.c

*

* Created on: Feb 14, 2023

* Author: zameel

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
   int *arr;
   int i, n;

   // Allocating memory using calloc for 5 elements
   arr = (int*)calloc(5, sizeof(int));
   // Checking if memory allocation was successful
   if(arr == NULL) {
      printf("Memory allocation failed");
      exit(1);
   }

   // Scanning array elements from console
   printf("Enter 5 elements of array:\n");
   for(i=0; i<5; i++) {
      scanf("%d", &arr[i]);
   }

   // Changing size of array using realloc
   printf("\nEnter new size of array: ");
   scanf("%d", &n);
   arr = (int*)realloc(arr, n * sizeof(int));
   // Checking if memory reallocation was successful
   if(arr == NULL) {
      printf("Memory reallocation failed");
      exit(1);
   }

   // Scanning array elements from console again
   printf("\nEnter %d elements of array:\n", n);
   for(i=5; i<n; i++) {
      scanf("%d", &arr[i]);
   }

   // Displaying all elements of array on console
   printf("\nElements of array are: ");
   for(i=0; i<n; i++) {
      printf("%d ", arr[i]);
   }

   // Freeing memory allocated to array
   free(arr);

   return 0;
}
