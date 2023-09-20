#include <stdio.h>

// initializing the functions
void merge_sort(int *a, int n);
void merge_middle(int *a, int l, int r);
void merge(int *a, int l, int m, int r);

int main(void) {
  // taking input for the size of the array
  int n;

  printf("Array Length: ");
  scanf("%d", &n);

  // checking to see if the array is empty
  if (n == 0) {
    printf("Empty Array. ");
    return 1;
  }

  // Taking the elements of the array as input and checking to see
  // if the input is valid or not as an integer
  int arr[n];

  printf("Array: ");

  for (int i = 0; i < n; i++) {
    if (scanf("%d", &arr[i]) != 1) {
      printf("Invalid Input.");
      printf("\n");
      return 1;
    }
  }

  // Calls mger_sort function and prints out the output
  merge_sort(arr, n);

  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");

  return 0;
}

void merge_sort(int *a, int n) {
  // Calls the merge_middle function
  merge_middle(a, 0, n - 1);
}

void merge_middle(int *a, int l, int r) {
  // While the length of the left side is smaller than the right side
  // separate the left and right side to get the middle
  // Calls merge function to do mergesort
  if (l < r) {
    int m = l + (r - l) / 2;

    merge_middle(a, l, m);
    merge_middle(a, m + 1, r);

    merge(a, l, m, r);
  }
}

void merge(int *a, int l, int m, int r) {
  // initialization of variables and the lengths of the two arrays
  int i, j, k;

  int l_length = m - l + 1;
  int r_length = r - m;

  int temp_l[l_length];
  int temp_r[r_length];

  // Stores the values of the array in a temporary left anf right array
  for (int i = 0; i < l_length; i++) {
    temp_l[i] = a[l + i];
  }
  for (int j = 0; j < r_length; j++) {
    temp_r[j] = a[m + 1 + j];
  }

  i = 0;
  j = 0;
  k = l;

  // Does mergersorting based on which number is bigger and swaps them
  // using temps arrays to store the past value for both
  // left and right side
  while ((i < l_length) && (j < r_length)) {
    if (temp_l[i] <= temp_r[j]) {
      a[k] = temp_l[i];
      i++;
    } else {
      a[k] = temp_r[j];
      j++;
    }
    k++;
  }

  // Checks for leftover elements on the left side
  while (i < l_length) {
    a[k] = temp_l[i];
    i++;
    k++;
  }

  // Checks for leftover elements not used on the right side
  while (j < r_length) {
    a[k] = temp_r[j];
    j++;
    k++;
  }
}