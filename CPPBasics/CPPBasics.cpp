// CPPBasics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CPPBasics.h"

using namespace std;

int main()
{
	//RunBasicIOProgram();

	//RunTypeCastingProgram();

 //   RunIfElseProgram();

	RunLoopPrograms();

    return 0;

}


void RunBasicIOProgram()
{
	cout << "~~~~~~~~~~~~~Basics I/O~~~~~~~~~~~~~~~~~" << endl;
	// Basics input and output code
	int a, b;

	cout << "Enter First number" << endl;
	cin >> a;

	cout << "Enter second number" << endl;
	cin >> b;

	cout << "The sum of two numbers = " << a + b << endl;

	cout << "~~~~~~~~~~~~~ End of Basics I/O~~~~~~~~~~~~~~~~~" << endl;
}

void RunTypeCastingProgram()
{
	cout << endl << "~~~~~~~~~~~~~Type Casting~~~~~~~~~~~~~~~~~" << endl;

	int i = 10;
	char c = 'b';

	i = c;  // Type casting from lower to higher

	cout << i << endl; // ASCII of b - 98

	i = 204764;

	c = i;  // Data loss as c can only store 1 byte and i has 4 byte

	cout << c << endl; // Random charcter

	cout << "~~~~~~~~~~~~~End of Type Casting~~~~~~~~~~~~~~~~~" << endl;
}

void RunIfElseProgram()
{
	cout << endl << "~~~~~~~~~~~~~If Else Programs~~~~~~~~~~~~~~~~~" << endl;

	// 1. Accept offer if package is more than 10LPA
	int package;

	cout << "~~~~~~ Accept offer if package is more than 10LPA~~~~~~~~~~~~~~" << endl;
	cout << "Enter Package ";
	cin >> package;

	// if(1) -> True, execute if block statements
	// if(0) -> False, execute else block statements
	if (package > 10)
		cout << "Accepted";
	else
		cout << "Rejected";

	cout << endl;

	//2. Student will pass if marks are more than 35
	cout << "~~~~~~  Student will pass if marks are more than 35~~~~~~~~~~~~~~" << endl;
	int marks;
	cout << "Enter Marks ";
	cin >> marks;

	if (marks > 35)
		cout << "Pass";
	else
		cout << "Fail";

	cout << endl;

	//3. Check Number is even or odd
	int number;
	cout << "~~~~~~ Check Number is even or odd~~~~~~~~~~~~~~" << endl;
	cout << "Enter Number ";
	cin >> number;

	if (number % 2 == 0)
		cout << "Even";
	else
		cout << "odd";

	cout << endl;

	// 4. Compare two numbers
	int num1, num2;
	cout << "~~~~~~ Compare two numbers~~~~~~~~~~~~~~" << endl;
	cout << "Enter First Number : ";
	cin >> num1;
	cout << "Enter Second Number : ";
	cin >> num2;

	if (num1 > num2)
		cout << num1 << " is bigger." << endl;
	else
		cout << num2 << " is bigger." << endl;

	//5. Check number is positive, negative or zero
	int input;
	cout << "~~~~~~ Check number is positive, negative or zero~~~~~~~~~~~~~~" << endl;
	cout << "Enter Number " << endl;
	cin >> input;

	if (input > 0) cout << "Positive";
	else if (input < 0) cout << "Negative";
	else cout << "Zero";

	cout << endl;

	//6. Vowels or consonants
	// vowels - a,e,i,o,u
	char c;
	cout << "~~~~~~ Check Vowels or consonants~~~~~~~~~~~~~~" << endl;
	cout << "Enter characters:  " << endl;
	cin >> c;

	if (c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i')
		cout << "Vowel";
	else
		cout << "Consonant";

	cout << endl;
}

void RunLoopPrograms()
{
	RunForLoopProgram();

	RunDoWhileLoopProgram();

	RunWhileLoopProgram();
}


void RunForLoopProgram()
{
	cout << "~~~~~~ FOR LOOP ~~~~~~~~~~~~~~" << endl;

	// 1. Print 1 to 5 Numbers 
	cout << "~~~~~~ Print 1 to 5 Numbers ~~~~~~~~~~~~~~" << endl;

	for (int i = 1; i <= 5; i++)
	{
		cout << i << endl;
	}

	// 2. Print square of n numbers
	cout << "~~~~~~ Print square of n numbers ~~~~~~~~~~~~~~" << endl;

	int num;
	cout << "Enter n: ";
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		cout << i << " : " << i * i << endl;
	}

	// 3.Print Even numbers from 2 to n
	cout << "~~~~~~ Print Even numbers from 2 to n~~~~~~~~~~~~~~" << endl;

	int numOfEven;
	cout << "Enter n: ";
	cin >> numOfEven;

	for (int i = 2; i <= numOfEven; i+=2)
	{
		cout << i << endl;
	}

	// 4.Print odd numbers from 1 to n
	cout << "~~~~~~ Print odd numbers from 1 to n ~~~~~~~~~~~~~~" << endl;

	int numOfOdd;
	cout << "Enter n: ";
	cin >> numOfOdd;

	for (int i = 1; i <= numOfOdd; i += 2)
	{
		cout << i << endl;
	}
}

void RunDoWhileLoopProgram()
{
}

void RunWhileLoopProgram()
{
}
