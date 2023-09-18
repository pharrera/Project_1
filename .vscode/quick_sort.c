#include <stdio.h>

// void quick_sort(int *a, int n);   // quick sort an array a with n elements in C


void swap(int array[], int j, int k) {
    int temp = array[k];
    array[k] = array[j];
    array[j] = temp;
}

void sort(int array[], int a, int b) {
    if (a >= b)
        return;

    int pivot = array[a];
    int i = a + 1, j = b;
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
        sort(array, a, i - 1);
        sort(array, i + 1, b);
    } else { 
        sort(array, a + 1, b);
    }
}

void quick_sort(int *a, int n) {
    sort(a, 0, n - 1);
}

int main() {
    int array[] = { };
    //int array1[] = {6, 6, 7, 2, K, 8, 9, 4};
    int array3[] = { 9, 2, 6, 7, 5, 4, 0, 2, 7, 5 };
  
    quick_sort(array, 0);
    //quick_sort(array1, 8);
    quick_sort(array3, 10);

