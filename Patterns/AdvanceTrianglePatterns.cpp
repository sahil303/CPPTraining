#include "AdvanceTrianglePatterns.h"
#include <iostream>
using namespace std;

/*
Output -
		*
	  * *
	* * *
  * * * *
* * * * *
*/
void AdvTriangle_StarPattern(int n)
{
	// pattern will have spaces and stars
	// space = n - row (if started from 1)
	// print stars row times
	for (int row = 0; row < n; row++)
	{
		for (int spaces = 0; spaces < (n - row) - 1; spaces++)
		{
			cout << "  ";
		}

		for (int stars = 0; stars <= row; stars++)
		{
			cout << "* ";
		}

		cout << '\n';
	}

	cout << "\nApproach 2\n";

	for (int row = 1; row <= n; row++)
	{
		for (int spaces = 1; spaces <= (n - row); spaces++)
		{
			cout << "  ";
		}

		for (int stars = 1; stars <= row; stars++)
		{
			cout << "* ";
		}

		cout << '\n';
	}

}

/*
Output -
		1
	  2 2
	3 3 3
  4 4 4 4
5 5 5 5 5
*/
void AdvTriangle_NumberPattern1(int n)
{
	for (int row = 0; row < n; row++)
	{
		for (int spaces = 0; spaces < (n - row) - 1; spaces++)
		{
			cout << "  ";
		}
		for (int numbers = 1; numbers <= (row + 1); numbers++)
		{
			cout << row + 1 << " ";
		}

		cout << "\n";
	}
}

/*
Output -
		1
	  1 2
	1 2 3
  1 2 3 4
1 2 3 4 5
*/
void AdvTriangle_NumberPattern2(int n)
{
	for (int row = 0; row < n; row++)
	{
		for (int spaces = 0; spaces < (n - row) - 1; spaces++)
		{
			cout << "  ";
		}
		for (int numbers = 1; numbers <= (row + 1); numbers++)
		{
			cout << numbers << " ";
		}

		cout << "\n";
	}
}

/*
Output -
		1
	  2 1
	3 2 1
  4 3 2 1
5 4 3 2 1
*/
void AdvTriangle_NumberPattern3(int n)
{
	for (int row = 1; row <= n; row++)
	{
		for (int spaces = 1; spaces <= (n - row); spaces++)
		{
			cout << "  ";
		}
		for (int numbers = row; numbers >= 1; numbers--)
		{
			cout << numbers << " ";
		}

		cout << "\n";
	}
}

/*
Output -
		A
	  A B
	A B C
  A B C D
A B C D E
*/
void AdvTriangle_AlphabetPattern(int n)
{
	// Approach 1
	for (int row = 1; row <= n; row++)
	{
		for (int spaces = 1; spaces <= (n - row); spaces++)
		{
			cout << "  ";
		}
		for (char alphabet = 'A'; alphabet <= 'A' + row - 1; alphabet++)
		{
			cout << alphabet << " ";
		}

		cout << "\n";
	}

	cout << "\n\n\n";


	for (int row = 1; row <= n; row++)
	{
		char name = 'A';
		for (int spaces = 1; spaces <= (n - row); spaces++)
		{
			cout << "  ";
		}
		for (int col = 1; col <= row; col++)
		{
			name = 'A' + col - 1;
			cout << name << " ";
		}

		cout << "\n";
	}
}
