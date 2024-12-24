#include "Pyramid.h"
#include <iostream>
using namespace std;

/*
Output-
		  *
		* * *
	  * * * * *
	* * * * * * *
  * * * * * * * * *
*/
void PYRAMID_Stars(int n)
{
	for (int row = 1; row <= n; row++)
	{
		for (int spaces = 1; spaces <= n - row; spaces++)
		{
			cout << "  ";
		}
		// run star for loop until 2row -1 times
		for (int stars = 1; stars <= (2 * row) - 1; stars++)
		{
			cout << "* ";
		}

		cout << "\n";
	}
}

/*
Output-
* * * * * * * * *
  * * * * * * *
	* * * * *
	  * * *
		*
*/
void PYRAMID_ReverseStars(int n)
{
	// Approach 1
	for (int row = 1; row <= n; row++)
	{
		for (int spaces = 1; spaces <= row - 1; spaces++)
		{
			cout << "  ";
		}

		for (int stars = 1; stars <= (2*n - 1) - (2 * (row - 1)); stars++)
		{
			cout << "* ";
		}

		cout << "\n";
	}

	cout << "\n\n";

	// Approach 2
	for (int row = 5; row > 0; row--)
	{
		for (int spaces = 1; spaces <= n - row; spaces++)
		{
			cout << "  ";
		}

		for (int stars = 1; stars <= (2 * row) - 1; stars++)
		{
			cout << "* ";
		}

		cout << "\n";
	}
}

/*
Output-
		  1
		1 2 1
	  1 2 3 2 1
	1 2 3 4 3 2 1
  1 2 3 4 5 4 3 2 1
*/
void PYRAMID_NumberPattern1(int n)
{
	for (int row = 0; row < n; row++)
	{
		for (int spaces = 1; spaces <= n - row; spaces++)
		{
			cout << "  ";
		}
		// run numbers for loop until 2row -1 times
		for (int numbers = 1; numbers <= row+1; numbers++)
		{
			cout << numbers << " ";
		}
		for (int col = row; col >= 1; col--)
		{
			cout << col << " ";
		}

		cout << "\n";
	}
}
