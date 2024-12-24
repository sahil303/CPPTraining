// Patterns.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BasicPatterns.h"
#include "TrianglePatterns.h"
#include "AdvanceTrianglePatterns.h"
#include "Pyramid.h"
using namespace std;

void BasicPatterns();
void TriangleSimplePatterns();
void AdvancedTrianglePatterns();
void PyramidPatterns();
void HollowDiamondPattern(int n);
void ButterflyPattern(int n);
void DiamondPattern(int n);

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
			cout << "\n\n~~~~~~~~~~~~~~~ PATTERNS ~~~~~~~~~~~~~~~~\n\n";
			cout << "Choose Options From Below:\n\n";
			cout << "1. Basic Patterns\n";
			cout << "2. Triangle Simple Patterns\n";
			cout << "3. Advanced Triangle Patterns\n";
			cout << "4. Pyramid Patterns\n";
			cout << "5. Hollow Diamond Pattern\n";
			cout << "6. Butterfly Pattern\n";
			cout << "7. Diamond Pattern\n";
			cout << "8. Exit\n";
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
				BasicPatterns();
				break;
			}
			case 2:
			{
				TriangleSimplePatterns();
				break;
			}
			case 3:
			{
				AdvancedTrianglePatterns();
				break;
			}
			case 4:
			{
				PyramidPatterns();
				break;
			}
			case 5:
			{
				int rows;
				cout << "Enter number of rows in hollow diamond : ";
				cin >> rows;
				HollowDiamondPattern(rows);
				break;
			}
			case 6:
			{
				int rows;
				cout << "Enter number of rows in butterfly : ";
				cin >> rows;
				ButterflyPattern(rows);
				break;
				break;
			}
			case 7:
			{
				int rows;
				cout << "Enter number of rows in Diamond : ";
				cin >> rows;
				DiamondPattern(rows);
				break;
				break;
			}
			case 8:
				bContinue = false;
				break;
			default:
			{
				cout << "Invalid option!!!\n";
				break;
			}
		}
	} while (bContinue);

}

void BasicPatterns()
{
	char c = 'y';
	int option = 0, rows, cols;
	do
	{
		bool bValidInput = false;

		while (!bValidInput)
		{
			cout << "\n\n~~~~~~~~~~~~~~ BASICS PATTERNS ~~~~~~~~~~~~~~\n\n";
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
			Basic_PrintSimpleStarsInStraightLine(n);
			break;
		}
		case 2:
		{
			cout << "Enter Number of rows and cols : ";
			cin >> rows >> cols;
			Basic_PrintFilledSqaure(rows, cols);
			break;
		}
		case 3:
		{
			int rows, cols;
			cout << "Enter Number of rows and cols : ";
			cin >> rows >> cols;
			Basic_Print10Pattern(rows, cols);
			break;
		}
		case 4:
		{
			cout << "Enter Number of rows and cols : ";
			cin >> rows >> cols;
			cout << endl;
			Basic_PrintNumberPattern1(rows, cols);
			break;
		}
		case 5:
		{
			cout << "Enter Number of rows and cols : ";
			cin >> rows >> cols;
			cout << endl;
			Basic_PrintNumberPattern2(rows, cols);
			break;
		}
		case 6:
		{
			cout << "Enter Number of rows and cols : ";
			cin >> rows >> cols;
			cout << endl;
			Basic_PrintNumberPattern3(rows, cols);
			break;
		}
		case 7:
		{
			cout << "Enter Number of rows and cols : ";
			cin >> rows >> cols;
			cout << endl;
			Basic_PrintDescendingNumPattern(rows, cols);
			break;
		}
		case 8:
		{
			cout << "Enter Number of rows and cols : ";
			cin >> rows >> cols;
			cout << endl;
			Basic_PrintAscendingNumSquarePattern(rows, cols);
			break;
		}

		case 9:
		{
			char start, end;
			cout << "Enter start and end aplhabets : ";
			cin >> start >> end;
			cout << endl;
			Basic_PrintAlphabets1(start, end);
			break;
		}
		case 10:
		{
			char start, end;
			cout << "Enter start and end aplhabets : ";
			cin >> start >> end;
			cout << endl;
			Basic_PrintAlphabets2(start, end);
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

void TriangleSimplePatterns()
{
	char c = 'y';
	int option = 0, rows, cols;
	do
	{
		bool bValidInput = false;

		while (!bValidInput)
		{
			cout << "\n\n\n~~~~~~~~ SIMPLE TRIANGLE PATTERNS ~~~~~~~~~\n\n\n";
			cout << "Choose Options From Below:\n\n";
			cout << "1. Print Stars Right Handed Triangle\n";
			cout << "2. Print Stars Reverse Triangle\n";
			cout << "3. Print Number Triangle Pattern - 1\n";
			cout << "4. Print Number Triangle Pattern - 2\n";
			cout << "5. Print Number Triangle Pattern - 3\n";
			cout << "6. Print Reverse Number Triangle Pattern - 1\n";
			cout << "7. Print Reverse Number Triangle Pattern - 2\n";
			cout << "8. Print Reverse Number Reverse Triangle Pattern\n";
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
				cout << "Enter number of rows in triangle : ";
				cin >> rows;
				BasicTriangle_PrintStarRightHandTriangle(rows);
				break;
			}
			case 2:
			{
				cout << "Enter Number of rows in triangle : ";
				cin >> rows;
				BasicTriangle_PrintStarReverseTriangle(rows);
				break;
			}
			case 3:
			{
				cout << "Enter Number of rows in triangle : ";
				cin >> rows;
				BasicTriangle_PrintNumberTriangle1(rows);
				break;
			}
			case 4:
			{
				cout << "Enter Number of rows in triangle : ";
				cin >> rows;
				BasicTriangle_PrintNumberTriangle2(rows);
				break;
			}
			case 5:
			{
				cout << "Enter Number of rows in triangle : ";
				cin >> rows;
				BasicTriangle_PrintNumberTriangle3(rows);
				break;
			}
			case 6:
			{
				cout << "Enter Number of rows in triangle : ";
				cin >> rows;
				BasicTriangle_PrintReverseNumberTriangle1(rows);
				break;
			}
			case 7:
			{
				cout << "Enter Number of rows in triangle : ";
				cin >> rows;
				BasicTriangle_PrintReverseNumberTriangle2(rows);
				break;
			}
			case 8:
			{
				cout << "Enter Number of rows in triangle : ";
				cin >> rows;
				BasicTriangle_PrintReverseNumberReverseTriangle(rows);
				break;
			}

			case 9:
			{
				char start, end;
				cout << "Enter start and end alphabets : ";
				cin >> start >> end;
				BasicTriangle_PrintAlphabetsTriangle1(start, end);
				break;
			}
			case 10:
			{
				char start, end;
				cout << "Enter start and end alphabets : ";
				cin >> start >> end;
				BasicTriangle_PrintAlphabetsTriangle2(start, end);
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

void AdvancedTrianglePatterns()
{
	char c = 'y';
	int option = 0, rows, cols;
	do
	{
		bool bValidInput = false;

		while (!bValidInput)
		{
			cout << "\n\n\n~~~~~~~~ ADVANCED TRIANGLE PATTERNS ~~~~~~~~~\n\n\n";
			cout << "Choose Options From Below:\n\n";
			cout << "1. Print Stars Left Handed Triangle\n";
			cout << "2. Print Number Triangle Pattern - 1\n";
			cout << "3. Print Number Triangle Pattern - 2\n";
			cout << "4. Print Number Triangle Pattern - 3\n";
			cout << "5. Print Alphabets pattern\n";
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
			cout << "Enter number of rows in triangle : ";
			cin >> rows;
			AdvTriangle_StarPattern(rows);
			break;
		}
		case 2:
		{
			cout << "Enter Number of rows in triangle : ";
			cin >> rows;
			AdvTriangle_NumberPattern1(rows);
			break;
		}
		case 3:
		{
			cout << "Enter Number of rows in triangle : ";
			cin >> rows;
			AdvTriangle_NumberPattern2(rows);
			break;
		}
		case 4:
		{
			cout << "Enter Number of rows in triangle : ";
			cin >> rows;
			AdvTriangle_NumberPattern3(rows);
			break;
		}
		case 5:
		{
			cout << "Enter Number of rows in triangle : ";
			cin >> rows;
			AdvTriangle_AlphabetPattern(rows);
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

void PyramidPatterns()
{
	char c = 'y';
	int option = 0, rows, cols;
	do
	{
		bool bValidInput = false;

		while (!bValidInput)
		{
			cout << "\n\n\n~~~~~~~~ PYRAMID PATTERNS ~~~~~~~~~\n\n\n";
			cout << "Choose Options From Below:\n\n";
			cout << "1. Print Simple Star Pyramid\n";
			cout << "2. Print Reverse Star Pyramid\n";
			cout << "3. Print Pyramid Number Pattern - 1\n";
			cout << "3. Print Number Triangle Pattern - 2\n";
			cout << "4. Print Number Triangle Pattern - 3\n";
			cout << "5. Print Alphabets pattern\n";
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
			cout << "Enter number of rows in pyramid : ";
			cin >> rows;
			PYRAMID_Stars(rows);
			break;
		}
		case 2:
		{
			cout << "Enter Number of rows in pyramid : ";
			cin >> rows;
			PYRAMID_ReverseStars(rows);
			break;
		}
		case 3:
		{
			cout << "Enter Number of rows in pyramid : ";
			cin >> rows;
			PYRAMID_NumberPattern1(rows);
			break;
		}
		case 4:
		{
			cout << "Enter Number of rows in pyramid : ";
			cin >> rows;
			AdvTriangle_NumberPattern3(rows);
			break;
		}
		case 5:
		{
			cout << "Enter Number of rows in pyramid : ";
			cin >> rows;
			AdvTriangle_AlphabetPattern(rows);
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


/*
Output -
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
*/
void HollowDiamondPattern(int n)
{
	// Upper portion 
	for (int row = n; row > 0; row--)
	{
		// print stars
		for (int stars = 0; stars < row; stars++)
		{
			cout << "* ";
		}

		// print spaces
		for (int spaces = 0; spaces < 2 * (n - row); spaces++)
		{
			cout << "  ";
		}

		// print stars
		for (int stars = 0; stars < row; stars++)
		{
			cout << "* ";
		}
		cout << "\n";
	}

	// Lower portion
	for (int row = 1; row <= n; row++)
	{
		// print stars
		for (int stars = 0; stars < row; stars++)
		{
			cout << "* ";
		}

		// print spaces
		for (int spaces = 2 * (n - row); spaces > 0; spaces--)
		{
			cout << "  ";
		}

		// print stars
		for (int stars = 0; stars < row; stars++)
		{
			cout << "* ";
		}
		cout << "\n";
	}
}

/*
Output -
*                     *
* *                 * *
* * *             * * *
* * * *         * * * *
* * * * *     * * * * *
* * * * * * * * * * * *
* * * * *     * * * * *
* * * *         * * * *
* * *             * * *
* *                 * *
*                     *
*/
void ButterflyPattern(int n)
{
	// upper portion
	for (int row = 1; row <= n; row++)
	{
		//print stars
		for (int stars = 1; stars <= row; stars++)
		{
			cout << "* ";
		}

		//print spaces
		for (int spaces = 1; spaces <= (2 * (n - row)); spaces++)
		{
			cout << "  ";
		}

		//print stars
		for (int stars = 1; stars <= row; stars++)
		{
			cout << "* ";
		}

		cout << "\n";
	}

	// lower portion
	for (int row = n - 1; row >= 1; row--)
	{
		//print stars
		for (int stars = 1; stars <= row; stars++)
		{
			cout << "* ";
		}

		//print spaces
		for (int spaces = 1; spaces <= (2 *(n - row)); spaces++)
		{
			cout << "  ";
		}

		//print stars
		for (int stars = 1; stars <= row; stars++)
		{
			cout << "* ";
		}

		cout << "\n";
	}
}

/*
Output -
	   *
	  * *
	 * * *
	* * * *
   * * * * *
  * * * * * *
 * * * * * * *
* * * * * * * *
* * * * * * * *
 * * * * * * *
  * * * * * *
   * * * * *
	* * * *
	 * * *
	  * *
	   *
*/
void DiamondPattern(int n)
{
	// upper portion
	for (int row = 1; row <= n; row++)
	{
		//print spaces
		for (int spaces = 1; spaces <= (n - row); spaces++)
		{
			cout << " ";
		}

		//print stars
		for (int stars = 1; stars <= row; stars++)
		{
			cout << "* ";
		}

		cout << "\n";
	}
	// upper portion
	for (int row = n; row >= 1; row--)
	{
		//print spaces
		for (int spaces = 1; spaces <= (n - row); spaces++)
		{
			cout << " ";
		}

		//print stars
		for (int stars = 1; stars <= row; stars++)
		{
			cout << "* ";
		}

		cout << "\n";
	}
}
