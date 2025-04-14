#pragma once
class Merge {
public:
   static void iterativeMergeSort(int arr[], int size);       
   static void recursiveMergeSort(int arr[], int l, int r); // taking the array and the range (l to r) to sort

private:
   static void merge(int arr[], int l, int m, int r);  // Used by both sorting methods
};

