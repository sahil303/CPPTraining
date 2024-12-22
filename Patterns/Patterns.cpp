// Patterns.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "BasicPatterns.h"

int main()
{
	char c = 'y';
	int option = 0, rows, cols;
	do
	{
		bool bValidInput = false;

		while (!bValidInput)
		{
			cout << "\n\n\n~~~~~ BASICS PATTERNS ~~~~~\n\n\n";
			cout << "Choose Options From Below:\n\n";
			cout << "1. Print Stars\n";
			cout << "2. Print Filled Sqaure\n";
			cout << "3. Print Number 10 pattern\n";
			cout << "4. Print Number pattern - 1\n";
			cout << "5. Print Number pattern - 2\n";
			cout << "6. Print Number pattern - 3\n";
			cout << "7. Print Descending Number pattern\n";
			cout << "8. Print Ascending Square Number pattern\n";
			cout << "9. Print Alphabets pattern 1\n";
			cout << "10. Print Alphabets pattern 2\n";
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
			cout << "Enter Number of Stars to Print : ";
			cin >> n;
			PrintStars(n);
			break;
		}
		case 2:
		{
			cout << "Enter Number of rows and cols : ";
			cin >> rows >> cols;
			PrintFilledSqaure(rows, cols);
			break;
		}
		case 3:
		{
			int rows, cols;
			cout << "Enter Number of rows and cols : ";
			cin >> rows >> cols;
			Print10Pattern(rows, cols);
			break;
		}
		case 4:
		{
			cout << "Enter Number of rows and cols : ";
			cin >> rows >> cols;
			cout << endl;
			PrintNumberPattern1(rows, cols);
			break;
		}
		case 5:
		{
			cout << "Enter Number of rows and cols : ";
			cin >> rows >> cols;
			cout << endl;
			PrintNumberPattern2(rows, cols);
			break;
		}
		case 6:
		{
			cout << "Enter Number of rows and cols : ";
			cin >> rows >> cols;
			cout << endl;
			PrintNumberPattern3(rows, cols);
			break;
		}
		case 7:
		{
			cout << "Enter Number of rows and cols : ";
			cin >> rows >> cols;
			cout << endl;
			PrintDescendingNumPattern(rows, cols);
			break;
		}
		case 8:
		{
			cout << "Enter Number of rows and cols : ";
			cin >> rows >> cols;
			cout << endl;
			PrintAscendingNumSquarePattern(rows, cols);
			break;
		}

		case 9:
		{
			char start, end;			
			cout << "Enter start and end aplhabets : ";
			cin >> start >> end;
			cout << endl;
			PrintAlphabets1(start, end);
			break;
		}
		case 10:
		{
			char start, end;
			cout << "Enter start and end aplhabets : ";
			cin >> start >> end;
			cout << endl;
			PrintAlphabets2(start, end);
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
