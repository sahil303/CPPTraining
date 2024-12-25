#include "ForLoopProgram.h"
#include <iostream>
using namespace std;

void RunForLoopProgram()
{
	char c = 'y';
	int option = 0, n ,num;
	do
	{
		bool bValidInput = false;

		while (!bValidInput)
		{
			cout << "\n\n~~~~~~~~~~~~~~ FOR LOOPS ~~~~~~~~~~~~~~\n\n";
			cout << "Choose Options From Below:\n\n";
			cout << "1. Print 1 to n Numbers\n";
			cout << "2. Print square of n numbers\n";
			cout << "3. Print Even numbers from 2 to n\n";
			cout << "4. Print odd numbers from 1 to n\n";
			cout << "5. Print a to z alphabets\n";
			cout << "6. Print numbers in Reverse order\n";
			cout << "7. Print numbers 1 to n with difference of 3\n";
			cout << "8. Print multiplication table\n";
			cout << "9. Calculate power of a number\n";
			cout << "10. Sum of n natural nos\n";
			cout << "11. Sum of sqauares n natural nos\n";
			cout << "12. Factorial of a number \n";
			cout << "13. Prime number\n";
			cout << "14. Fibonacci number\n";
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
			// 1. Print 1 to n Numbers 
			cout << "\n~~~~~~ Print 1 to n Numbers ~~~~~~~~~~~~~~" << endl;
			cout << "Enter n: ";
			cin >> n;
			Print1tonNumbers(n);
			break;
		}
		case 2:
		{
			cout << "\n~~~~~~ Print square of n numbers ~~~~~~~~~~~~~~" << endl;
			cout << "Enter n: ";
			cin >> num;
			PrintSquareOfNnumbers(n);
			break;
		}
		case 3:
		{
			cout << "\n~~~~~~ Print Even numbers from 2 to n~~~~~~~~~~~~~~" << endl;
			int numOfEven;
			cout << "Enter n: ";
			cin >> numOfEven;
			PrintEvenNumbersFrom2ToN(numOfEven);
			break;
		}
		case 4:
		{
			// 4.Print odd numbers from 1 to n
			cout << "\n~~~~~~~~~ Print odd numbers from 1 to n ~~~~~~~~~~~~~~" << endl;

			int numOfOdd;
			cout << "Enter n: ";
			cin >> numOfOdd;
			PrintOddNumbersFrom1ToN(numOfOdd);
			break;
		}		
		case 5:
		{
			//5.Print a to z alphabets
			cout << "~~~~~~ Print a to z alphabets ~~~~~~~~~~~~~~" << endl;

			for (char name = 'a'; name <= 'z'; name++)
			{
				cout << name << " ";
			}

			cout << endl;
			break;
		}	
		case 6:
		{
			// 6.Print numbers in Reverse order
			cout << "\n~~~~~~ Print numbers in Reverse order ~~~~~~~~~~~~~~" << endl;
			cout << "\nEnter start number :";
			cin >> n;
			for (int i = n; i >= 1; i--)
			{
				cout << i << " ";
			}
			cout << endl;

			break;
		}		
		case 7:
		{
			// 7.Print numbers 1 to 100 with difference of 3
			cout << "\n~~~~~~ Print numbers 1 to n with difference of 3~~~~~~~~~~~~~~" << endl;
			cout << "\nEnter number :";
			cin >> n;
			for (int i = 1; i <= n; i += 3)
			{
				cout << i << " ";
			}
			cout << endl;

			break;
		}				
		case 8:
		{
			//8.Print multiplication table
			cout << "\n~~~~~~ Print multiplication table~~~~~~~~~~~~~~" << endl;
			cout << "\nEnter number :";
			cin >> n;
			for (int i = 1; i <= n; i++)
			{
				cout << n << " x " << i << " = " << n * i << endl;
			}
			cout << endl;
			break;
		}		
		case 9:
		{
			// 9.Calculate power of a number
			cout << "\n~~~~~~ Calculate power of a number ~~~~~~~~~~~~~~" << endl;
			cout << "Enter the number :";
			cin >> n;
			int pow;
			cout << "Enter the power :";
			cin >> pow;
			int number = n;
			for (int i = 1; i < pow; i++)
			{
				number = number * n;
			}
			cout << "Answer = " << number;
			cout << endl;
			break;
		}
		case 10:
		{
			// 10.Sum of n natural nos
			cout << "\n~~~~~~ Sum of n natural nos ~~~~~~~~~~~~~~" << endl;
			cout << "Enter a number :";
			cin >> n;

			int sum = 0;
			for (int i = 1; i <= n; i++)
			{
				sum = sum + i;
			}
			cout << "Answer = " << sum;
			cout << endl;
			break;
		}		
		case 11:
		{
			// 11. Sum of sqaure n natural nos
			cout << "\n~~~~~~~~~ Sum of sqaures n natural nos ~~~~~~~~~~~~~~" << endl;
			cout << "\nEnter a number :";
			cin >> n;

			cout << "\nAnswer = " << PrintSquareOfNaturalNos(n);
			cout << endl;
			break;
		}		
		case 12:
		{
			//12.Factorial of a number
			cout << "\n~~~~~~ Factorial of a number ~~~~~~~~~~~~~~" << endl;
			cout << "\nEnter a number :";
			cin >> n;

			cout << "\nAnswer = " << Factorial(n);
			cout << endl;
			break;
		}	
		case 13:
		{
			//13.Prime number
			cout << "\n~~~~~~ Prime number ~~~~~~~~~~~~~~" << endl;
			cout << "\nEnter a number :";
			cin >> n;
			isPrime(n);
			
			cout << endl;
			break;
		}
		case 14:
		{
			//14. Fibonacci Number
			cout << "\n~~~~~~ Fibonacci number ~~~~~~~~~~~~~~" << endl;
			cout << "Enter a number :";
			cin >> n;
			cout << endl;
			cout << FibonacciNumber(n);
			cout << endl;
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

void Print1tonNumbers(int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << i << endl;
	}
}

void PrintSquareOfNnumbers(int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << i << " : " << i * i << endl;
	}
	cout << endl;
}

void PrintEvenNumbersFrom2ToN(int n)
{
	for (int i = 2; i <= n; i += 2)
	{
		cout << i << endl;
	}
	cout << endl;
}

void PrintOddNumbersFrom1ToN(int n)
{
	for (int i = 1; i <= n; i += 2)
	{
		cout << i << endl;
	}
	cout << endl;
}

int PrintSquareOfNaturalNos(int n)
{
	int sqsum = 0;
	for (int i = 1; i <= n; i++)
	{
		sqsum = sqsum + (i * i);
	}
	return sqsum;
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

void isPrime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			cout << "\nNot Prime.";
		}
	}

	cout << "\nPrime.";
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
		cout << curr << " ";
		last = prev;
		prev = curr;
		curr = last + prev;
	}

	return curr;
}

