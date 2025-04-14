#include "Insertion.h"

void Insertion::insertionSort(int arr[] , int size)
{
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


void Insertion::recursiveInsertionSort(int arr[], int n)
{
    if (n <= 1)
        return;


    recursiveInsertionSort(arr, n - 1);


    int last = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}
