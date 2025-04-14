#include <iostream>
#include <cstdlib> 
#include "Controller.h" 
#include "Search.h" 
using namespace std;

int runApp(); // my app
void init_arrays(int arr1[], int arr2[], int size); // Function to initialize the arrays with random values
void display_array(const int arr[], int size); // Function to display array

int main() {  
    runApp();
}

// Function to initialize the arrays with random values
void init_arrays(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        arr1[i] = rand() % 10000 + 1; // Random values between 1 and 10000
        arr2[i] = arr1[i];            // Ensure arr2 starts identical to arr1
    }
}

// Function to display an array
void display_array(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// my app
int runApp() {
    const int size = 10;          // Array size
    int arr1[size];              // Array for iterative sorting
    int arr2[size];              // Array for recursive sorting

    // Initialize arrays with identical random values
    init_arrays(arr1, arr2, size);



    // Display welcome message and menu
    cout << "=====================================" << endl;
    cout << "    Sorting and Searching Project       " << endl;
    cout << "=====================================" << endl;
    cout << "Welcome! This program compares iterative and recursive sorting algorithms" << endl;
    cout << "and allows you to search for an element in the sorted array." << endl;

    // Display initial unsorted array
    cout << "=====================================" << endl;
    cout << "Initial unsorted array:" << endl;
    display_array(arr1, size);
    cout << "=====================================" << endl;

    cout << "\nPlease choose a sorting algorithm:" << endl;
    cout << "1. Selection Sort" << endl;
    cout << "2. Insertion Sort" << endl;
    cout << "3. Bubble Sort" << endl;
    cout << "4. Merge Sort" << endl;
    cout << "Enter your choice (1-4): ";

    int choice;
    cin >> choice;

    // Perform sorting based on user's choice using switch-case
    cout << "=====================================" << endl;
    switch (choice) {
    case 1:
        cout << "Sorting with Selection Sort..." ;
        Controller::selection(arr1, arr2, size);
        break;
    case 2:
        cout << "Sorting with Insertion Sort..." ;
        Controller::insertion(arr1, arr2, size);
        break;
    case 3:
        cout << "Sorting with Bubble Sort..." ;
        Controller::bubble(arr1, arr2, size);
        break;
    case 4:
        cout << "Sorting with Merge Sort..." ;
        Controller::merge(arr1, arr2, size);
        break;
    default:
        cout << "Invalid choice! Please run the program again with a choice between 1 and 4." << endl;
        return 1; // Exit with error code
    }

    // Prompt user to enter an element to search for
    cout << "=====================================" << endl;
    cout << "Sorting complete. Now, let's search the sorted array." << endl;
    cout << "Please enter the element you want to search for: ";
    int key;
    cin >> key;

    // Perform searches on arr1 (sorted iteratively)
    cout << "=====================================" << endl;
    cout << "Search Results:" << endl;

    // Sequential Searches
    int index1 = Search::iterativeSeqSearch(arr1, size, key);
    cout << "Iterative Sequential Search: ";
    if (index1 != -1) {
        cout << "Element " << key << " found at index " << index1 << endl;
    }
    else {
        cout << "Element " << key << " not found" << endl;
    }

    int index2 = Search::recursiveSeqSearch(arr1, size, key);
    cout << "Recursive Sequential Search: ";
    if (index2 != -1) {
        cout << "Element " << key << " found at index " << index2 << endl;
    }
    else {
        cout << "Element " << key << " not found" << endl;
    }

    // Binary Searches
    int index3 = Search::iterativeBinarySearch(arr1, size, key);
    cout << "Iterative Binary Search: ";
    if (index3 != -1) {
        cout << "Element " << key << " found at index " << index3 << endl;
    }
    else {
        cout << "Element " << key << " not found" << endl;
    }

    int index4 = Search::recursiveBinarySearch(arr1, size, key);
    cout << "Recursive Binary Search: ";
    if (index4 != -1) {
        cout << "Element " << key << " found at index " << index4 << endl;
    }
    else {
        cout << "Element " << key << " not found" << endl;
    }

    cout << "=====================================" << endl;
    return 0; 
}