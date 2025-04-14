#include "Bubble.h"
#include <algorithm>

void Bubble::iterativeBubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void Bubble::recursiveBubbleSort(int arr[], int n)
{
    if (n == 1) return; // Base case: array of size 1 is sorted

    // Perform one pass to bubble the largest element to the end
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            std::swap(arr[i], arr[i + 1]);
        }
    }

    // Recursively sort the first n-1 elements
    recursiveBubbleSort(arr, n - 1);
}
