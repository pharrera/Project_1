#include <stdio.h>

// void quick_sort(int *a, int n);   // merge sort an array a with n elements in C


void swap(int array[], int i, int j) {
    int temp = array[j];
    array[j] = array[i];
    array[i] = temp;
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

void quicksort(int *a, int n) {
    sort(*a, 0, n - 1);
}


