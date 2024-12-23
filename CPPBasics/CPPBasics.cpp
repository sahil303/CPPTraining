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
	int n, num;

	cout << "~~~~~~ FOR LOOP ~~~~~~~~~~~~~~" << endl;

	// 1. Print 1 to 5 Numbers 
	cout << "~~~~~~ Print 1 to 5 Numbers ~~~~~~~~~~~~~~" << endl;

	for (int i = 1; i <= 5; i++)
	{
		cout << i << endl;
	}

	// 2. Print square of n numbers
	cout << "~~~~~~ Print square of n numbers ~~~~~~~~~~~~~~" << endl;
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

	//5.Print a to z alphabets
	cout << "~~~~~~ Print a to z alphabets ~~~~~~~~~~~~~~" << endl;

	for (char name = 'a'; name <= 'z'; name++)
	{
		cout << name << " ";
	}

	cout << endl;

	// 6.Print numbers in Reverse order
	cout << "~~~~~~ Print numbers in Reverse order ~~~~~~~~~~~~~~" << endl;
	cout << "Enter start number :";
	cin >> n;
	for (int i = n; i >= 1; i--)
	{
		cout << i << " ";
	}
	cout << endl;

	// 7.Print numbers 1 to 100 with difference of 3
	cout << "~~~~~~ Print numbers 1 to n with difference of 3~~~~~~~~~~~~~~" << endl;
	cout << "Enter number :";
	cin >> n;
	for (int i = 1; i <= n; i+=3)
	{
		cout << i << " ";
	}
	cout << endl;

	//8.Print multiplication table
	cout << "~~~~~~ Print multiplication table~~~~~~~~~~~~~~" << endl;
	cout << "Enter number :";
	cin >> n;
	for (int i = 1; i <= 10; i ++)
	{
		cout << n << " x " << i << " = " << n * i << endl;
	}
	cout << endl;

	// 9.Calculate power of a number
	cout << "~~~~~~ Calculate power of a number ~~~~~~~~~~~~~~" << endl;
	cout << "Enter the number :";
	cin >> n;
	int pow;
	cout << "Enter the power :";
	cin >> pow;
	int number = n;
	for (int i = 1; i < pow; i ++)
	{
		number = number * n;
	}
	cout << "Answer = " << number;
	cout << endl;

	// 10.Sum of n natural nos
	cout << "~~~~~~ Sum of n natural nos ~~~~~~~~~~~~~~" << endl;
	cout << "Enter a number :";
	cin >> n;
	
	int sum = 0;
	for (int i = 1; i <= n; i ++)
	{
		sum = sum + i;
	}
	cout << "Answer = " << sum;
	cout << endl;

	// 11.Sum of sqaure n natural nos
	cout << "~~~~~~ Sum of sqaures n natural nos ~~~~~~~~~~~~~~" << endl;
	cout << "Enter a number :";
	cin >> n;

	int sqsum = 0;
	for (int i = 1; i <= n; i++)
	{
		sqsum = sqsum + (i*i);
	}
	cout << "Answer = " << sqsum;
	cout << endl;

	//12.Factorial of a number
	cout << "~~~~~~ Factorial of a number ~~~~~~~~~~~~~~" << endl;
	cout << "Enter a number :";
	cin >> n;

	cout << "Answer = " << Factorial(n);
	cout << endl;

	//12.Prime number
	cout << "~~~~~~ Prime number ~~~~~~~~~~~~~~" << endl;
	cout << "Enter a number :";
	cin >> n;

	if (isPrime(n)) cout << "Prime";
	else cout << "Not Prime \n";
	cout << endl;

	//13. Fibonacci Number
	cout << "~~~~~~ Fibonacci number ~~~~~~~~~~~~~~" << endl;
	cout << "Enter a number :";
	cin >> n;

	cout << FibonacciNumber(n);
	cout << endl;
}

unsigned long long Factorial(int n)
{
	unsigned long long fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact = fact * i;
	}

	return fact;
}

bool isPrime(int n)
{
	bool isPrime = true;

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

int FibonacciNumber(int n)
{
	if (n == 0 || n == 1)
		return 0;
	if (n == 2)
		return 1;

	int last = 0, prev = 1;

	cout << last << " " << prev << " ";

	int curr = last + prev;
	for (int index = 3; index < n; index++)
	{
		cout  << curr << " ";
		last = prev;
		prev = curr;
		curr = last + prev;
	}

	return curr;
}

void RunDoWhileLoopProgram()
{
}

void RunWhileLoopProgram()
{
}
