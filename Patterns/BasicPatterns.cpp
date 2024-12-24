#include "BasicPatterns.h"
#include <iostream>
using namespace std;

//* * * * *//
void Basic_PrintSimpleStarsInStraightLine(int n)
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
void Basic_PrintFilledSqaure(int rows, int cols)
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

/*
Output -
	10 10 10 10 10
	10 10 10 10 10
	10 10 10 10 10
	10 10 10 10 10
*/
void Basic_Print10Pattern(int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << 10 << " ";
		}
		cout << endl;
	}
}

/*
Output -
	1 1 1 1 1 1
	2 2 2 2 2 2
	3 3 3 3 3 3
	4 4 4 4 4 4
	5 5 5 5 5 5
*/
void Basic_PrintNumberPattern1(int rows, int cols)
{
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 0; j <= cols; j++)
		{
			cout << i << " ";
		}
		cout << endl;
	}
}

/*
Output -
	1 1 1 1 1 1
	2 2 2 2 2 2
	3 3 3 3 3 3
	4 4 4 4 4 4
	5 5 5 5 5 5
*/
void Basic_PrintNumberPattern2(int rows, int cols)
{
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= cols; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
}

/*
Output -
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/
void Basic_PrintNumberPattern3(int rows, int cols)
{
	// Approach 1
	cout << "\n\n First Approach using count \n\n";
	int count = 0;
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			cout << ++count << " ";
		}
		cout << endl;
	}

	// Approach 2
	cout << "\n\n Second Approach using rows \n\n";
	for (int row = 0; row < rows; row++)
	{
		int startElement = cols * row;

		for (int col = 1; col <= cols; col++)
		{
			cout << startElement + col << " ";
		}
		cout << endl;
	}

}

/*
Output -
	5 4 3 2 1
	5 4 3 2 1
	5 4 3 2 1
	5 4 3 2 1
	5 4 3 2 1
*/
void Basic_PrintDescendingNumPattern(int rows, int cols)
{
	for (int i = 1; i <= rows; i++)
	{
		for (int j = cols; j > 0; j--)
		{
			cout << j << " ";
		}
		cout << endl;
	}
}

/*
Output -
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
*/
void Basic_PrintAscendingNumSquarePattern(int rows, int cols)
{
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= cols; j++)
		{
			cout << j * j << " ";
		}

		cout << endl;
	}
}

/*
Output -
a a a a a
b b b b b
c c c c c
d d d d d
e e e e e
*/
void Basic_PrintAlphabets1(char startChar, char endChar)
{
	// Approach 1

	cout << "\n\nFirst Approach using start and end character \n\n";

	for (char row = startChar; row <= endChar; row++)
	{
		for (char col = startChar; col <= endChar; col++)
		{
			cout << row << " ";
		}
		cout << endl;
	}

	// Approach 2
	cout << "\n\nSecond Approach using integer \n\n";
	for (int i = 0; i < 5; i++)
	{
		char name = 'a' + i;
		for (int j = 0; j < 5; j++)
		{
			cout << name << " ";
		}
		cout << endl;
	}
}

/*
Output -
a b c d e
a b c d e
a b c d e
a b c d e
a b c d e
*/
void Basic_PrintAlphabets2(char startChar, char endChar)
{

	// Approach 1
	cout << "\n\nFirst Approach using start and end character \n\n";

	for (char row = startChar; row <= endChar; row++)
	{
		for (char col = startChar; col <= endChar; col++)
		{
			cout << col << " ";
		}
		cout << endl;
	}

	// Approach 2
	cout << "\n\nSecond Approach using typecast \n\n";
	for (int i = 0; i < 5; i++)
	{
		char name = 'a';
		for (int j = 0; j < 5; j++)
		{
			cout << (char)(name + j) << " ";
		}
		cout << endl;
	}
}
