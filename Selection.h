#pragma once
#include <iostream>
using namespace std;
class Selection
{

public:
   static void selectionSort(int arr[], int size);
   static void recurSelectionSort(int arr1[], int len1, int pos1);

private:
   static int findMin(int arr[], int i, int j);



};

