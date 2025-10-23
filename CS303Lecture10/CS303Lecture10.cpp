// CS303Lecture10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include "Functions.h"


int main() {
	int pos1, pos2;
	//PART 1 - SEARCHES
	//LINEAR
	vector<int> unsorted = { 15, 10, 99, 5, 6, 3, 16, 1 };
	pos1 = LinearSearch(unsorted, 6);
	pos2 = LinearSearch(unsorted, 19);
	cout << "LINEAR: " << pos1 << " " << pos2 << endl << endl;

	//BINARY
	vector<int>   sorted = { 1,3,5,6,10,15,16,99 };
	pos1 = BinarySearch(sorted, 6);
	pos2 = BinarySearch(sorted, 19);
	cout << "BINARY: " << pos1 << " " << pos2 << endl << endl;


	//PART 2 - SORTS
	vector<int> select = { 170, 45, 75, 90, 802, 24, 2, 66 };
	vector<int> insert = { 170, 45, 75, 90, 802, 24, 2, 66 };
	vector<int> bubble = { 170, 45, 75, 90, 802, 24, 2, 66 };
	vector<int> quick = { 170, 45, 75, 90, 802, 24, 2, 66 };
	vector<int> merge = { 170, 45, 75, 90, 802, 24, 2, 66, 92 };
	vector<int> shell = { 170, 45, 75, 90, 802, 24, 2, 66 };
	vector<int> oddEven = { 170, 45, 75, 90, 802, 24, 2, 66 };
	vector<int> radix = { 170, 45, 75, 90, 802, 24, 2, 66 };
	//vector<int> shell   = { 45,35,80,75,60,90,70,75,55,90,85,34,45,62,57 };
	//vector<int> oddEven = { 45,35,80,75,60,90,70,75,55,90,85,34,45,62,57 };
	//vector<int> radix = { 45,35,80,75,60,90,70,75,55,90,85,34,45,62,57 };
	

	SelectionSort(select);
	InsertionSort(insert);
	BubbleSort(bubble);

	cout << "\n\nQUICK SORT\n";
	QuickSort(quick, 0, quick.size() - 1);
	MergeSort(merge);
	ShellSort(shell);
	OddEven(oddEven);
	
	RadixSort(radix);
}

