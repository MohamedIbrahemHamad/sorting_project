#pragma once
#include <iostream>
using namespace std;

class Search
{
public:
    // Sequential search
    static int iterativeSeqSearch(const int list[], int listLength, int searchItem);
    static int recursiveSeqSearch(const int list[], int size, int searchItem, int index = 0);
    // Binary search
    static int iterativeBinarySearch(const int list[], int listLength, int searchItem);
    static int recursiveBinarySearch(const int list[], int listLength, int searchItem, int low = 0, int high = -1);
};