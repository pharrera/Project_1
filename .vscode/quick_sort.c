// IDE used https://replit.com/~



#include <stdio.h>

void swap(int array[], int a, int b) {
  int temp = array[b];
  array[b] = array[a];
  array[a] = temp;
}

void partition(int array[], int a, int b) {
  if (a >= b)
      return ;

  int pivot = array[a]; // used to partition array into 2
  int i = a + 1; // i index is used for swapping
  int j = b;
  
  while (i < j) {
      while (i < j && array[j] >= pivot)
          --j;
      while (i < j && array[i] <= pivot)
          ++i;
      if (i < j)
          swap(array, i, j);
  }
  if (array[a] > array[i]) {
      swap(array, a, i);
      partition(array, a, i - 1);
      partition(array, i + 1, b);
  } 
  else { 
      partition(array, a + 1, b);
  }
  
}

void quick_sort(int *a, int n) {
    if (0 < n){
        partition(a, 0, n - 1);
      }

}

int main() {
    // Test Case 1:
    int test1[] = {6, 9, 55, 7, 7, 4, 1, 5, 7,3 ,6,256, 241, 164, 14, 717, 54, 88};
    int n1 = sizeof(test1) / sizeof(test1[0]); // find size of array
    quick_sort(test1, n1);
    printf("\nSorted array: ");
      for (int i = 0; i < n1; i++) {
        printf("%d ", test1[i]);
      }
      printf("\n\n");
    
    // Test Case 2
    int test2[] = {};
    int n2 =sizeof(test2) / sizeof(test2[0]);  // find size of array
    quick_sort(test2, n2);
    printf("\nSorted array: (Empty)");
      for (int i = 0; i < n2; i++) {
        printf("%d ", test2[i]);
    }
    printf("\n\n");
}
