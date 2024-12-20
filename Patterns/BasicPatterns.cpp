#include "BasicPatterns.h"
#include <iostream>
using namespace std;

//* * * * *//
void PrintStars(int n)
{
	for (int i = 0; i < n; i++)
		cout << "*" << " ";
}

/* 
Output - 
	* * * * *
	* * * * *
	* * * * *
	* * * * *
	* * * * *
*/
void PrintFilledSqaure(int rows, int cols)
{
	// 1. start from 1st row
	// 2. check if less than required rows
	// 3. Print * cols times
	// 4. move to next line
	// 5. Go To 2

	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			cout << "*" << " ";
		}

		cout << endl;
	}
}
