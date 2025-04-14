#include "Search.h"

// Iterative Sequential Search 
int Search::iterativeSeqSearch(const int list[], int listLength, int searchItem)
{
    int loc = 0;
    bool found = false;

    while (loc < listLength && !found) {
        if (list[loc] == searchItem)
            found = true;
        else
            loc++;
    }

    if (found)
        return loc;
    else
        return -1;
}

// Recursive Sequential Search
int Search::recursiveSeqSearch(const int list[], int size, int searchItem, int index)
{
    if (index >= size)
        return -1;
    if (list[index] == searchItem)
        return index;
    return recursiveSeqSearch(list, size, searchItem, index + 1);
}

// Iterative Binary Search
int Search::iterativeBinarySearch(const int list[], int listLength, int searchItem)
{
    int low = 0;
    int high = listLength - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Avoid potential overflow
        if (list[mid] == searchItem)
            return mid;
        else if (list[mid] < searchItem)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Recursive Binary Search
int Search::recursiveBinarySearch(const int list[], int listLength, int searchItem, int low, int high)
{
    // Initialize high for the first call
    if (high == -1)
        high = listLength - 1;

    // Base case: if low > high, item not found
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2; // Avoid potential overflow
    if (list[mid] == searchItem)
        return mid;
    else if (list[mid] < searchItem)
        return recursiveBinarySearch(list, listLength, searchItem, mid + 1, high);
    else
        return recursiveBinarySearch(list, listLength, searchItem, low, mid - 1);
}