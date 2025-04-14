#include "Selection.h"
#include <iostream>

void Selection::selectionSort(int arr[], int size)
{
    int MinIdx;
    for (int i = 0; i < size - 1; i++)
    {
        MinIdx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[MinIdx]) {
                MinIdx = j;
            }
        }
        swap(arr[MinIdx], arr[i]);
    }



}

void Selection::recurSelectionSort(int arr1[], int len1, int pos1)
{
    int temp;
    int minpos1;
    if (pos1 == len1) {
        return;
    }
    minpos1 = findMin(arr1, pos1, len1 - 1);
    if (minpos1 != pos1) {
        temp = arr1[pos1];
        arr1[pos1] = arr1[minpos1];
        arr1[minpos1] = temp;
    }
    recurSelectionSort(arr1, len1, pos1 + 1);
}

int Selection::findMin(int arr[], int i, int j)
{

    int minpos;
    if (i == j) {
        return i;
    }
    minpos = findMin(arr, i + 1, j);
    if (arr[i] < arr[minpos]) {
        minpos = i;
    }
    return (minpos);
   
}
