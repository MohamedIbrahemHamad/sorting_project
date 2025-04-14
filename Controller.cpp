#include "Controller.h"  
#include "Selection.h"   
#include "Insertion.h"
#include "Merge.h"
#include "Bubble.h"
#include <chrono>  
#include <cstdlib>  

void Controller::insertion(int arr1[],int arr2[], int size)
{
    cout << "\n\n\n";
    //Iteration 
    auto start = std::chrono::high_resolution_clock::now();
	Insertion::insertionSort(arr1 , size);
    auto end = std::chrono::high_resolution_clock::now();
    cout << "\nSorted array using Iteration (Insertion Algorithm) :" << endl;
    print(arr1, size);
    cout << "\nTime taken by Iteration (Insertion Algorithm) : " << chrono::duration_cast<chrono::milliseconds>(end - start).count() << "\n\n\n";
    // Recursive 
    start = std::chrono::high_resolution_clock::now();
	Insertion::recursiveInsertionSort(arr2, size);
    end = std::chrono::high_resolution_clock::now();
    cout << "\nSorted array using Recursive (Insertion Algorithm) :" << endl;
    print(arr2, size);
    cout << "\nTime taken by Recursive (Insertion Algorithm) : " << chrono::duration_cast<chrono::milliseconds>(end - start).count() << "\n\n\n";
}

void Controller::selection(int arr1[], int arr2[], int size)
{  
   cout << "\n\n\n";  
   //Iteration 
   auto start = std::chrono::high_resolution_clock::now();  
   Selection::selectionSort(arr1, size);  
   auto end = std::chrono::high_resolution_clock::now();  
   cout << "\nSorted array using Iteration (Selection Algorithm):" << endl;
   print(arr1, size);
   cout << "\nTime taken by Iteration (Selection Algorithm): " << chrono::duration_cast<chrono::milliseconds>(end - start).count() << "\n\n\n";
   // Recursive 
   start = std::chrono::high_resolution_clock::now();  
   Selection::recurSelectionSort(arr2, size, 0);
   end = std::chrono::high_resolution_clock::now();  
   cout << "\nSorted array using Recursive (Selection Algorithm):" << endl;
   print(arr2, size);
   cout << "\nTime taken by Recursive (Selection Algorithm): " << chrono::duration_cast<chrono::milliseconds>(end - start).count() << "\n\n\n";
}

void Controller::bubble(int arr1[], int arr2[], int size)
{
    cout << "\n\n\n";
    //Iteration 
    auto start = std::chrono::high_resolution_clock::now();
	Bubble::iterativeBubbleSort(arr1, size);
    auto end = std::chrono::high_resolution_clock::now();
    cout << "\nSorted array using Iteration (Bubble Algorithm) :" << endl;
    print(arr1, size);
    cout << "\nTime taken by Iteration (Bubble Algorithm) : " << chrono::duration_cast<chrono::milliseconds>(end - start).count() << "\n\n\n";
    // Recursive 
    start = std::chrono::high_resolution_clock::now();
	Bubble::recursiveBubbleSort(arr2, size);
    end = std::chrono::high_resolution_clock::now();
    cout << "\nSorted array using Recursive (Bubble Algorithm) :" << endl;
    print(arr2, size);
    cout << "\nTime taken by Recursive (Bubble Algorithm) : " << chrono::duration_cast<chrono::milliseconds>(end - start).count() << "\n\n\n";
}

void Controller::merge(int arr1[], int arr2[], int size)
{
    cout << "\n\n\n";
    //Iteration 
    auto start = std::chrono::high_resolution_clock::now();
    Merge::iterativeMergeSort(arr1, size);
    auto end = std::chrono::high_resolution_clock::now();
    cout << "\nSorted array using Iteration (Merge Algorithm) :" << endl;
    print(arr1, size);
    cout << "\nTime taken by Iteration (Merge Algorithm) : " << chrono::duration_cast<chrono::milliseconds>(end - start).count() << "\n\n\n";
    // Recursive 
    start = std::chrono::high_resolution_clock::now();
    Merge::recursiveMergeSort(arr2, 0,size-1);
    end = std::chrono::high_resolution_clock::now();
    cout << "\nSorted array using Recursive (Merge Algorithm) :" << endl;
    print(arr2, size);
    cout << "\nTime taken by Recursive (Merge Algorithm) : " << chrono::duration_cast<chrono::milliseconds>(end - start).count() << "\n\n\n" ;

}

void Controller::print(int arr[], int size)  
{  
   for (int i = 0; i < size; i++)  
   {  
       cout << arr[i] << " ";  
   }  
   cout << endl;  
}
