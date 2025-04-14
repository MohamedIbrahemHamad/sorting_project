#pragma once
#include <iostream>
using namespace std;
class Controller
{

public:
	static void insertion(int arr1[], int arr2[] , int size);
	static void selection(int arr1[], int arr2[] , int size);
	static void bubble(int arr1[], int arr2[], int size);
	static void merge(int arr1[], int arr2[], int size);
	

private:
	 static void print(int arr[], int size);



};

