// LeetCodeProblems.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void AddDigits(int x);
void CheckLeapYear(int year);
void ReverseIntegers(int num);
void IsPowerOfTwo(int num);
void SqrtOfNum(int num);
void IsPalindrome(int num);
void ComplementOfNumber(int num);
void ConvertToUppercase(char c);
void FormRectangle(int a, int b, int c, int d);
void FindTrailingZerosOfFactorial(int n);
bool IsAmstrongNumber(int n, int digits);
int CountDigits(int n);

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
			cout << "6. PALINDROME NUMBER\n";
			cout << "7. COMPLEMENT OF BASE 10 NUMBER\n";
			cout << "8. CONVERT LOWERCASE TO UPPERCASE\n";
			cout << "9. FIND IS IT A RECTANGLE\n";
			cout << "10. NUMBER OF TRAILING ZEROS\n";
			cout << "11. AMSTRONG NUMBER\n";
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
		case 6:
		{
			int num;
			cout << "\nEnter a number : ";
			cin >> num;
			cout << endl;
			IsPalindrome(num);
			break;
		}
		case 7:
		{
			int num;
			cout << "\nEnter a number : ";
			cin >> num;
			cout << endl;
			ComplementOfNumber(num);
			break;
		}
		case 8:
		{
			char c;
			cout << "\nEnter a character between (a-z) : ";
			cin >> c;
			cout << endl;
			ConvertToUppercase(c);
			break;
		}
		case 9:
		{
			int a, b, c, d;
			cout << "\nEnter sides of rectangle : ";
			cin >> a >> b >> c >> d;
			cout << endl;
			FormRectangle(a, b, c, d);
			break;
		}
		case 10:
		{
			int n;
			cout << "\nEnter a number : ";
			cin >> n;
			cout << endl;
			FindTrailingZerosOfFactorial(n);
			break;
		}
		case 11:
		{
			int num, digits = 1;

			cout << "\nEnter a number : ";
			cin >> num;
			cout << endl;
			
			if (num > 9)
				digits = CountDigits(num);

			if (IsAmstrongNumber(num, digits))
				cout << num << " is an Amstrong Number\n";
			else
				cout << num << " is not an Amstrong Number\n";
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

/*
* An integer is a palindrome when it reads the same forward and backward. 
* For example, 121 is a palindrome while 123 is not.
*/
void IsPalindrome(int num)
{
	int ans = 0, rem, givenNum = num;

	// negative number is not a palindrome.
	if (num < 0)
	{
		cout << givenNum << " is not a palindrome." << endl;
		return;
	}

	if (num == 0)
	{
		cout << givenNum << " is a palindrome." << endl;
		return;
	}

	// extract each digit from num by mod 10 and dividing num by 10 until it become zero.
	// reverse all the digits by adding it to another variable.
	while (num)
	{
		rem = num % 10;
		num /= 10;
		
		// reverse is not possible.
		if (ans > INT_MAX / 10)
		{
			cout << givenNum << " is not a palindrome." << endl;
			return;
		}

		ans = ans * 10 + rem;
	}

	if(ans == givenNum)
		cout << givenNum << " is a palindrome." << endl;
	else
		cout << givenNum << " is not a palindrome." << endl;
}

/*
* The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its 
* binary representation.
* For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
* Given an integer n, return its complement.
*/
void ComplementOfNumber(int num)
{
	int ans = 0, rem, mul = 1;
	int givenNum = num;

	if (num == 0)
	{
		rem = num % 2;
		rem = rem ^ 1;
		ans = ans + rem * mul;
	}

	// convert the number to binary along with that do Ex-OR with each bit to perform 1's complement
	// convert the complement bit to decimal.
	while (num)
	{
		rem = num % 2;	
		rem = rem ^ 1;
		num /= 2;
		ans = ans + rem * mul;
		mul *= 2;
	}

	cout << ans << " is complement of " << givenNum << endl;
}

void ConvertToUppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		cout << "The answer is : " << c << endl;
		return;
	}

	if (c < 'a' || c > 'z')
	{
		cout << "Invalid Input\n";
		return;
	}

	char ans = c - 'a' + 'A';	// get the difference from small characters and add Capital A
	cout << "Converted value = " << ans << endl;
}

void FormRectangle(int a, int b, int c, int d)
{
	if (((a == b) && (c == d)) || ((a == c) && (b == d)) || ((a == d) && (b == c)))
		cout << "It is a Rectangle\n";
	else
		cout << "It is not a Rectangle\n";
}

void FindTrailingZerosOfFactorial(int n)
{
	long long fact = 1;
	int count = 0;

	if (n == 1)
	{
		cout << "Factorial of given number is " << 1 << endl;
		cout << "\nNumber of trailing zeros are " << count << endl;
		return;
	}

	for (int i = 1; i <= n; i++)
	{
		fact = fact * i;
	}

	cout << "Factorial of given number is " << fact << endl;

	while (n >= 5)
	{
		count = count + n / 5;
		n /= 5;
	}

	cout << "\nNumber of trailing zeros are " << count << endl;
}

int CountDigits(int n)
{
	if (n < 10)
		return 1;

	int count = 0;

	while (n)
	{
		count++;
		n /= 10;
	}

	return count;
}

bool IsAmstrongNumber(int n, int digits)
{
	int ans = 0, rem, givenNo = n;

	while (givenNo)
	{
		rem = givenNo % 10; // extract each digit
		ans = ans + pow(rem, digits);	// take pow of each digit with number of digits and add to sum
		givenNo /= 10;
	}

	if (ans == n)
		return true;
	else
		return false;
}
