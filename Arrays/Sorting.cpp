
#include <iostream>
#include "Sorting.h"
#include <chrono>
using namespace std::chrono;
using namespace std;

void RunSortingPrograms(int arr[], int size)
{
	char c = 'y';
	int option = 0, n, num;
	do
	{
		bool bValidInput = false;

		while (!bValidInput)
		{
			cout << "\n\n~~~~~~~~~~~~~~ SORTING PROGRAMS ~~~~~~~~~~~~~~\n\n";
			cout << "Choose Options From Below:\n\n";
			cout << "1. SELECTION SORT\n";
			cout << "2. BUBBLE SORT\n";
			cout << "3. INSERTION SORT\n";
			cout << "\n--------------\n";
			cout << "Choice : ";
			cin >> option;

			if (cin.fail()) {
				cout << "Invalid input! Expected an integer."
					<< endl;
				// Clear the failbit and ignore the remaining
				// input
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else {
				bValidInput = true;
			}
		}

		auto start = high_resolution_clock::now();

		switch (option)
		{
		case 1:
		{
			// Selection sort
			SelectionSort(arr, size);
			break;
		}
		case 2:
		{
			BubbleSort(arr, size);
			break;
		}
		case 3:
		{
			InsertionSort(arr, size);
			break;
		}
		default:
		{
			cout << "Invalid option!!!\n";
			break;
		}
		}


		auto stop = high_resolution_clock::now();

		auto duration = duration_cast<milliseconds>(stop - start);

		// To get the value of duration use the count()
		// member function on the duration object
		cout << "\nTime taken by function: "
			<< duration.count() << " milliseconds" << endl;

		cout << "\nDo you want to continue (Y/N)?\n";
		cin >> c;

	} while (c == 'y' || c == 'Y');
}

void SelectionSort(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int index = i;	// index of min element from i+1 to n
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[index])
				index = j;
		}

		swap(arr[i], arr[index]);
	}

	PrintSortedArray(arr, size);
}

void BubbleSort(int arr[], int size)
{
	int i = 0, j = 0;
	bool anyElementSwapped = false;

	// No of rounds
	for (i = size - 2; i >= 0; i--)
	{
		for (j = 0; j <= i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				anyElementSwapped = true;
			}
		}

		if (!anyElementSwapped)	// if array is already sorted
			break;
	}

	PrintSortedArray(arr, size);
}

void InsertionSort(int arr[], int size)
{
	int n = size;

	// No of rounds
	for (int i = 0; i < n; i++)
	{
		// insert the element to correct position
		for (int j = i; j > 0; j--)
		{
			if (arr[j] < arr[j - 1])
				swap(arr[j], arr[j - 1]);
			else
				break;
		}
	}

	PrintSortedArray(arr, size);
}

void PrintSortedArray(int arr[], int size)
{
	int arrSize = size;

	cout << "\nAfter sorting [";

	for (int i = 0; i < arrSize; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "]" << endl;
}