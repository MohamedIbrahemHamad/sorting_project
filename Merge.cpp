#include "Merge.h"
#include <algorithm>
using namespace std;

void Merge::iterativeMergeSort(int arr[], int size)
{
    int curr_size;  // Current size of subarrays to merge
    int left_start; // Starting index of left subarray

    // Merge subarrays in a bottom-up manner
    for (curr_size = 1; curr_size <= size - 1; curr_size = 2 * curr_size) {
        for (left_start = 0; left_start < size - 1; left_start += 2 * curr_size) {
            int mid =  min(left_start + curr_size - 1, size - 1);
            int right_end = min(left_start + 2 * curr_size - 1, size - 1);
            merge(arr, left_start, mid, right_end);
        }
    }

}

void Merge::recursiveMergeSort(int arr[], int l, int r)
{
    if (l >= r) return; // Base case: single element or empty

    int m = l + (r - l) / 2; // Find the middle point
    recursiveMergeSort(arr, l, m);      // Sort left half
    recursiveMergeSort(arr, m + 1, r);  // Sort right half
    merge(arr, l, m, r);                // Merge the sorted halves

}

void Merge::merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;  // Size of left subarray
    int n2 = r - m;      // Size of right subarray

    // Dynamically allocate memory for temporary arrays
    int* L = new int[n1];
    int* R = new int[n2];

    // Copy data into temporary arrays
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temporary arrays back into arr[l..r]
    int i = 0;  // Index for L[]
    int j = 0;  // Index for R[]
    int k = l;  // Index for arr[]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements of L[]
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy any remaining elements of R[]
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Free the dynamically allocated memory
    delete[] L;
    delete[] R;
}
