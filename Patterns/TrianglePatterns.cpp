#include "TrianglePatterns.h"
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
// columns dependent on row number
void PrintStarRightHandTriangle(int rows)
{
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col <= row; col++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}

/*
Output -
* * * *
* * *
* *
*
*/
void PrintStarReverseTriangle(int rows)
{
	// Approach 1
	cout << "\nApproach 1 using direct relation\n";

	for (int row = 1; row <= rows; row++)
	{
		for (int col = 1; col < rows - (row - 1); col++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	// Approach 2
	cout << "\nApproach 2 using reverse for loop\n";

	for (int row = 5; row > 0; row--)
	{
		for (int col = 1; col < row; col++)
		{
			cout << "* ";
		}
		cout << endl;
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
void PrintNumberTriangle1(int rows)
{
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
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
void PrintNumberTriangle2(int rows)
{
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i << " ";
		}
		cout << endl;
	}
}

/*
Output -
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
void PrintNumberTriangle3(int rows)
{
	// Approach 1
	cout << "\nApproach 1 using direct relation\n";
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= rows - (i - 1); j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}

	// Approach 2
	cout << "\nApproach 2 using reverse for loop\n";

	for (int row = 5; row > 0; row--)
	{
		for (int col = 1; col <= row; col++)
		{
			cout << col << " ";
		}
		cout << endl;
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
void PrintReverseNumberTriangle1(int rows)
{
	for (int row = 1; row <= rows; row++)
	{
		for (int col = row; col > 0; col--)
		{
			cout << col << " ";
		}
		cout << endl;
	}

	// Approach 2
	cout << "\nApproach 2\n";
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i - (j - 1) << " ";
		}
		cout << endl;
	}
}

/*
Output -
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/
void PrintReverseNumberTriangle2(int rows)
{
	// Approach 1
	cout << "\nApproach 1 using direct relation\n";
	for (int i = 1; i <= rows; i++)
	{
		for (int j = rows; j >= rows - (i - 1); j--)
		{
			cout << j << " ";
		}
		cout << endl;
	}

	// Approach 2
	cout << "\nApproach 2 using reverse for loop\n";

	for (int row = rows; row >= 1; row--)
	{
		for (int col = rows; col >= row; col--)
		{
			cout << col << " ";
		}
		cout << endl;
	}

}

/*
Output -
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5
*/
void PrintReverseNumberReverseTriangle(int rows)
{

	for (int row = rows; row > 0; row--)
	{
		for (int col = rows; col >= rows - row + 1; col--)
		{
			cout << col << " ";
		}
		cout << endl;
	}
}

/*
Output -
a
b b
c c c
d d d d
e e e e e
*/
void PrintAlphabetsTriangle1(char start, char end)
{
	for (char i = start; i <= end; i++)
	{
		for (char j = start; j <= i; j++)
		{
			cout << i << " ";
		}
		cout << endl;
	}


	// Approach 2
	cout << "\nApproach 2\n";
	for (int i = 1; i <= 5; i++)
	{
		char name = 'a' + (i - 1);
		for (char j = 1; j <= i; j++)
		{
			cout << name << " ";
		}
		cout << endl;
	}
}

/*
Output -
a
a b
a b c
a b c d
a b c d e
*/
void PrintAlphabetsTriangle2(char start, char end)
{
	for (char i = start; i <= end; i++)
	{
		for (char j = start; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}

	// Approach 2
	cout << "\nApproach 2\n";
	for (int i = 1; i <= 5; i++)
	{
		for (char j = 1; j <= i; j++)
		{
			char name = 'a' + (j - 1);
			cout << name << " ";
		}
		cout << endl;
	}
}
