#include "WhileLoopPrograms.h"
#include <iostream>
using namespace std;

void RunWhileLoopProgram()
{
	char c = 'y';
	int option = 0, rows, cols;
	do
	{
		bool bValidInput = false;

		while (!bValidInput)
		{
			cout << "\n\n~~~~~~~~~~~~~~ WHILE LOOP PROGRAMS ~~~~~~~~~~~~~~\n\n";
			cout << "Choose Options From Below:\n\n";
			cout << "1. Print 1 to n\n";
			cout << "2. Print Multiplication table of n\n";
			cout << "3. Find Factors of N\n";
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
			int n;
			cout << "\nEnter n : ";
			cin >> n;
			cout << endl;
			Print1toN(n);
			break;
		}
		case 2:
		{
			int n;
			cout << "\nEnter n : ";
			cin >> n;
			cout << endl;
			PrintMultiplicationTableOfN(n);
			break;
		}
		case 3:
		{
			int n;
			cout << "\nEnter n : ";
			cin >> n;
			cout << endl;
			PrintFactorsOfN(n);
			break;
		}
		default:
		{
			cout << "Invalid option!!!\n";
			break;
		}
		}
		cout << "\n\n~~~~~~~~~~~~~~ WHILE LOOP ~~~~~~~~~~~~~~\n\n";
		cout << "\nDo you want to continue (Y/N)?\n";
		cin >> c;

	} while (c == 'y' || c == 'Y');
}

void Print1toN(int n)
{
	int i = 1; // Initialization

	while (i <= n) // Break Condition
	{
		cout << i << " ";
		i++; // Update
	}
}

void PrintMultiplicationTableOfN(int n)
{
	int i = 1; // Initialization

	while (i <= 10) // Break Condition
	{
		cout << n << " x " << i << " = " << n * i << endl;
		i++; // Update
	}
}

void PrintFactorsOfN(int n)
{
	int i = 1; // Initialization

	cout << "Factors : ";

	while (i <= n) // Break Condition
	{
		if(n % i == 0)
			cout << i << " ";

		i++; // Update
	}
}
