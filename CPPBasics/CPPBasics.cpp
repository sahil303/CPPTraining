// CPPBasics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CPPBasics.h"
#include "IfElsePrograms.h"
#include "Loops.h"

using namespace std;

int main()
{
	char c = 'y';
	int option = 0;
	bool bContinue = true;
	do
	{
		bool bValidInput = false;

		while (!bValidInput)
		{
			cout << "\n\n~~~~~~~~~~~~~~~ BASIC PROGRAMS ~~~~~~~~~~~~~~~~\n\n";
			cout << "Choose Options From Below:\n\n";
			cout << "1. Basic Input Output Program\n";
			cout << "2. Run Type Casting Program\n";
			cout << "3. Run If Else Program\n";
			cout << "4. Run Loops Program\n";
			cout << "5. Exit\n";
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
			RunBasicIOProgram();
			break;
		}
		case 2:
		{
			RunTypeCastingProgram();
			break;
		}
		case 3:
		{
			RunIfElseProgram();
			break;
		}
		case 4:
		{
			RunLoopPrograms();
			break;
		}
		case 5:
			bContinue = false;
			break;
		default:
		{
			cout << "Invalid option!!!\n";
			break;
		}
		}
	} while (bContinue);

    return 0;
}


void RunBasicIOProgram()
{
	cout << "\n\n~~~~~~~~~~~~~Basics I/O~~~~~~~~~~~~~~~~~" << endl;
	// Basics input and output code
	int a, b;

	cout << "Enter First number" << endl;
	cin >> a;

	cout << "Enter second number" << endl;
	cin >> b;

	cout << "The sum of two numbers = " << a + b << endl;

	cout << "\n\n~~~~~~~~~~~~~ End of Basics I/O~~~~~~~~~~~~~~~~~" << endl;
}

void RunTypeCastingProgram()
{
	cout << endl << "\n\n~~~~~~~~~~~~~Type Casting~~~~~~~~~~~~~~~~~" << endl;

	int i = 10;
	char c = 'b';

	i = c;  // Type casting from lower to higher

	cout << i << endl; // ASCII of b - 98

	i = 204764;

	c = i;  // Data loss as c can only store 1 byte and i has 4 byte

	cout << c << endl; // Random charcter

	cout << "\n\n~~~~~~~~~~~~~End of Type Casting~~~~~~~~~~~~~~~~~" << endl;
}
