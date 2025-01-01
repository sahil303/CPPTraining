// LeetCodeProblems.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void AddDigits(int x);
void CheckLeapYear(int year);
void ReverseIntegers(int num);
void IsPowerOfTwo(int num);
void SqrtOfNum(int num);

int main()
{
	char c = 'y';
	int option = 0;
	do
	{
		bool bValidInput = false;

		while (!bValidInput)
		{
			cout << "\n\n~~~~~~~~~~~~~~ LEET CODE PROBLEMS ~~~~~~~~~~~~~~\n\n";
			cout << "Choose Options From Below:\n\n";
			cout << "1. ADD DIGITS\n";
			cout << "2. LEAP YEAR\n";
			cout << "3. REVERSE INTEGERS\n";
			cout << "4. POWER OF 2\n";
			cout << "5. SQUARE ROOT OF A NUMBER\n";
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
			int num;
			cout << "\nEnter a number : ";
			cin >> num;
			cout << endl;
			AddDigits(num);

			break;
		}
		case 2:
		{
			int num;
			cout << "\nEnter a year to check leap year : ";
			cin >> num;
			cout << endl;
			CheckLeapYear(num);
			break;
		}
		case 3:
		{
			int num;
			cout << "\nEnter a number : ";
			cin >> num;
			cout << endl;
			ReverseIntegers(num);
			break;
		}
		case 4:
		{
			int num;
			cout << "\nEnter a number : ";
			cin >> num;
			cout << endl;
			IsPowerOfTwo(num);
			break;
		}
		case 5:
		{
			int num;
			cout << "\nEnter a number : ";
			cin >> num;
			cout << endl;
			SqrtOfNum(num);
			break;
		}
		/*case 6:
		{
			char c;
			cout << "\nEnter characters:  " << endl;
			cin >> c;
			cout << "\n";
			CheckVowels(c);
			break;
		}*/
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

void AddDigits(int num)
{
	int givenNum = num;
	cout << "Approach 1 with O(logn)\n";

	while (num > 9)	// check if num is still more than two digits
	{
		int rem, ans = 0;

		while (num != 0)	// continue till num become zero
		{
			rem = num % 10;		// Extract single digit from num 
			ans += rem;			// Add to sum
			num /= 10;			// divide num to move to next digit
		}

		num = ans;			// continue to check if num is more than 2 digits
	}

	cout << "\nSum of Digits = " << num << endl;

	cout << "\n\nApproach 2 with O(1)\n";
	
	if(givenNum == 0)
		cout << "\nSum of Digits = 0\n";
	else if(givenNum % 9 == 0)			// To check if number is divisible by 9 we do add all digits
		cout << "\nSum of Digits = 9\n";
	else
		cout << "\nSum of Digits = " << givenNum % 9 << endl;

}

// If a year divisible by 400 then it is a leap year.
// If not then the year should be divisible by 4 and not by 100 to be a leap year.
void CheckLeapYear(int year)
{
	cout << endl;
	if (year % 400 == 0)
		cout  << year << " is a leap year\n";
	else if(year % 4 == 0 && year % 100 != 0)
		cout << year << " is a leap year\n";
	else
		cout << year << " is not a leap year\n";

}

void ReverseIntegers(int num)
{
	int ans = 0, rem;
	int givenInput = num;

	while (num)
	{
		rem = num % 10;
		num /= 10;
		//ans = ans * 10 + rem;		using this directly will give runtime integer overflow

		// check if ans is greater than int max or less than int min to avoid runtime overflow
		if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))	
		{
			ans = 0;
			break;
		}

		ans = ans * 10 + rem;
	}

	cout << "Reverse of " << givenInput << " is " << ans << endl;
}

void IsPowerOfTwo(int num)
{
	int givenNum = num;

	if (num < 1)
	{
		cout << givenNum << " is not a power of 2." << endl;
		return;
	}

	while (num != 1)
	{
		if (num % 2 == 1)
		{
			cout << givenNum << " is not a power of 2." << endl;
			return;
		}
		num /= 2;
	}

	cout << givenNum << " is a power of 2." << endl;
}

void SqrtOfNum(int num)
{
	for (int i = 0; i <= num; i++)
	{
		if (i * i == num)
		{
			cout << i << " is sqaure root of " << num << endl;
			break;
		}
		else if (i * i >= num)
		{
			cout << (i - 1) << " is sqaure root of " << num << endl;
			break;
		}
	}
}
