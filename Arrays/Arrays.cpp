#include <iostream>
using namespace std;

void PrintArray(int arr[], int size);

int FindMax(int arr[], int size);
int FindMin(int arr[], int size);

int main()
{
	char c = 'y';
	int option = 0;
	do
	{
		bool bValidInput = false;

		while (!bValidInput)
		{
			cout << "\n\n~~~~~~~~~~~~~~ ARRAYS PROBLEMS ~~~~~~~~~~~~~~\n\n";
			cout << "Choose Options From Below:\n\n";
			cout << "1. FIND MAXIMUM ELEMENT FROM ARRAY\n";
			cout << "2. FIND MINIMUM ELEMENT FROM ARRAY\n";
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
