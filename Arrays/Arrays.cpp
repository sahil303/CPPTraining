#include <iostream>
#include "Sorting.h"
using namespace std;

void PrintArray(int arr[], int size);

int FindMax(int arr[], int size);
int FindMin(int arr[], int size);

int main()
{
	char c = 'y';
	int option = 0;

	int myArray[1000];
	int myArraySize;

	cout << "\nEnter size of an array : \n";
	cin >> myArraySize;

	cout << "\nEnter "  << myArraySize << " element of array : \n";

	for (int i = 0; i < myArraySize; i++)
	{
		cin >> myArray[i];
	}

	//myArraySize = sizeof(myArray) / sizeof(myArray[0]);

	PrintArray(myArray, myArraySize);

	do
	{
		bool bValidInput = false;

		while (!bValidInput)
		{
			cout << "\n\n~~~~~~~~~~~~~~ ARRAYS PROBLEMS ~~~~~~~~~~~~~~\n\n";
			cout << "Choose Options From Below:\n\n";
			cout << "1. FIND MAXIMUM ELEMENT FROM ARRAY\n";
			cout << "2. FIND MINIMUM ELEMENT FROM ARRAY\n";
			cout << "3. SEARCH ELEMENT IN AN ARRAY\n";
			cout << "4. REVERSE AN ARRAY\n";
			cout << "5. FIND SECOND MAX ELEMENT\n";
			cout << "6. MISSING NUMBER IN AN ARRAY\n";
			cout << "7. FIBONACCI SERIES\n";
			cout << "8. ROTATE AN ARRAY BY 1\n";
			cout << "9. UPDATE ARRAY ELEMENT\n";
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

		switch (option)
		{
			case 1:
			{
				int arr[5];
				
				cout << "\nEnter 5 element of array : \n";
				
				for (int i = 0; i < 5; i++)
				{
					cin >> arr[i];
				}

				int arrSize = sizeof(arr) / sizeof(arr[0]);

				cout << "\nSize of entire array is " << sizeof(arr) << "\n";
				cout << "\nSize of single element of an array is " << sizeof(arr[0]) << "\n";
				cout << "\nTotal element present in an array is " << arrSize << "\n";

				PrintArray(arr, arrSize);

				cout << "\nMaximum element of array is " << FindMax(arr, arrSize) << endl;
				break;
			}
			case 2:
			{
				int arr[5];
				
				cout << "\nEnter 5 element of array : \n";
				
				for (int i = 0; i < 5; i++)
				{
					cin >> arr[i];
				}
				int arrSize = sizeof(arr) / sizeof(arr[0]);

				cout << "\nSize of entire array is " << sizeof(arr) << "\n";
				cout << "\nSize of single element of an array is " << sizeof(arr[0]) << "\n";
				cout << "\nTotal element present in an array is " << arrSize << "\n";

				PrintArray(arr, arrSize);

				cout << "\nMinimum element of array is " << FindMin(arr, arrSize) << endl;

				break;
			}
			case 3:
			{
				int arr[5];

				cout << "\nEnter 5 element of array : \n";

				for (int i = 0; i < 5; i++)
				{
					cin >> arr[i];
				}
				int arrSize = sizeof(arr) / sizeof(arr[0]);
				PrintArray(arr, arrSize);

				int key;

				cout << "\nEnter an element to search: " << endl;
				cin >> key;

				if (SearchElement(arr, arrSize, key))
				{
					cout << "\nElement found\n";
				}
				else
					cout << "\nElement not found\n";

				break;
			}
			case 4:
			{
				cout << "\Before Reverse\n";
				PrintArray(myArray, myArraySize);
				ReverseArray(myArray, myArraySize);
				cout << "\nAfter Reverse\n";
				PrintArray(myArray, myArraySize);
				break;
			}
			case 5:
			{
				FindSecondMax(myArray, myArraySize);
				break;
			}
			case 6:
			{
				cout << "\nEnter N :";
				int n;
				cin >> n;
				int arr[1000];

				cout << "\nEnter 5 element of array : \n";

				for (int i = 0; i < n - 1; i++)
				{
					cin >> arr[i];
				}

				cout << "\nMissing Number is :" << MissingNumber(arr, n);
				break;
			}
			case 7:
			{
				int n;
				cout << "\nEnter number to find nth Fibo number ";
				cin >> n;
				cout <<"\nNth Fibo number is " << NthFibonacciNumber(n);
				break;
			}
			case 9:
			{
				int n, n1;
				PrintArray(myArray, myArraySize);

				cout << "\nEnter element to update: ";
				cin >> n;

				if (SearchElement(myArray, myArraySize, n))
				{
					cout << "\nElement found\n";

					int index;

					for (int i = 0; i < myArraySize; i++)
					{
						if (myArray[i] == n)
						{
							index = i;
							break;
						}
					}

					cout << "\nEnter updated value:";
					cin >> n1;
					myArray[index] = n1;

					PrintArray(myArray, myArraySize);
				}
				else
					cout << "\nElement not found\n";

				break;
			}
			default:
			{
				cout << "Invalid option!!!\n";
				break;
			}
		}

		cout << "\nDo you want to continue (Y/N)?\n";
		cin >> c;

	} while (c == 'y' || c == 'Y');
}

void PrintArray(int arr[], int size)
{
	int arrSize = size;

	cout << "\nElement of arrays are [";

	for (int i = 0; i < arrSize; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "]" << endl;
}

int FindMax(int arr[], int size)
{
	int arrSize = size;

	int maxElement = INT_MIN;	// initialize with the min value

	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] > maxElement)
			maxElement = arr[i];
	}

	return maxElement;
}

int FindMin(int arr[], int size)
{
	int arrSize = size;

	int minElement = INT_MAX;	// initialize with the max value

	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] < minElement)
			minElement = arr[i];
	}

	return minElement;
}
