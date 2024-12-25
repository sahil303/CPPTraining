#include "IfElsePrograms.h"
#include <iostream>
using namespace std;

void RunIfElseProgram()
{
	char c = 'y';
	int option = 0, rows, cols;
	do
	{
		bool bValidInput = false;

		while (!bValidInput)
		{
			cout << "\n\n~~~~~~~~~~~~~~ If Else Programs ~~~~~~~~~~~~~~\n\n";
			cout << "Choose Options From Below:\n\n";
			cout << "1. Check Offer Acceptance\n";
			cout << "2. Check Pass Or Fail\n";
			cout << "3. Check Even Or Odd\n";
			cout << "4. Compare Two Numbers\n";
			cout << "5. Check Number Positive Negative\n";
			cout << "6. Check Vowels\n";
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
			int package;
			cout << "\nEnter Package : ";
			cin >> package;
			cout << endl;
			OfferAcceptance(package);
			break;
		}
		case 2:
		{
			int marks;
			cout << "\nEnter Marks : ";
			cin >> marks;
			cout << "\n";
			PassOrFail(marks);
			break;
		}
		case 3:
		{
			int number;
			cout << "\nEnter Number : ";
			cin >> number;
			cout << "\n";
			EvenOrOdd(number);
			break;
		}
		case 4:
		{
			int num1, num2;
			cout << "\nEnter First Number : ";
			cin >> num1;
			cout << "\nEnter Second Number : ";
			cin >> num2;
			cout << "\n";
			CompareTwoNumbers(num1, num2);
			break;
		}
		case 5:
		{
			int input;
			cout << "\nEnter Number " << endl;
			cin >> input;
			cout << "\n";
			CheckNumPosNeg(input);
			break;
		}
		case 6:
		{
			char c;
			cout << "\nEnter characters:  " << endl;
			cin >> c;
			cout << "\n";
			CheckVowels(c);
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

// Accept offer if package is more than 10LPA
// if(1) -> True, execute if block statements
// if(0) -> False, execute else block statements
void OfferAcceptance(int package)
{
	if (package > 10)
		cout << "\nAccepted";
	else
		cout << "\nRejected";

	cout << endl;
}

// Student will pass if marks are more than 35
void PassOrFail(int marks)
{
	if (marks > 35)
		cout << "Pass";
	else
		cout << "Fail";

	cout << endl;
}


// Check Number is even or odd
void EvenOrOdd(int num)
{
	if (num % 2 == 0)
		cout << "Even";
	else
		cout << "odd";

	cout << endl;
}

// Compare two numbers
void CompareTwoNumbers(int num1, int num2)
{
	if (num1 > num2)
		cout << num1 << " is bigger." << endl;
	else
		cout << num2 << " is bigger." << endl;
}

// Check number is positive, negative or zero
void CheckNumPosNeg(int num)
{
	if (num > 0) cout << "Positive";
	else if (num < 0) cout << "Negative";
	else cout << "Zero";

}

// Vowels or consonants
// vowels - a,e,i,o,u
void CheckVowels(char c = ' ')
{
	if (c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i')
		cout << "Vowel";
	else
		cout << "Consonant";

	cout << endl;
}
