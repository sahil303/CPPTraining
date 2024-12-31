
#include <iostream>
using namespace std;

void ConvertDecimalToBinary(int number);
void ConvertDecimalToOctal(int number);
void ConvertOctalToBinary(int number);
void ConvertBinaryToDecimal(int number);
void ConvertBinaryToOctal(int number);
void ConvertOctalToDecimal(int number);

int main()
{
	char c = 'y';
	int option = 0, n;
	do
	{
		bool bValidInput = false;

		while (!bValidInput)
		{
			cout << "\n\n~~~~~~~~~~~~~~ NUMBER SYSTEMS ~~~~~~~~~~~~~~\n\n";
			cout << "Choose Options From Below:\n\n";
			cout << "1. Conversion from Decimal to Binary \n";
			cout << "2. Conversion from Binary to Decimal \n";
			cout << "3. Conversion from Decimal to Octal \n";
			cout << "4. Conversion from Octal to Decimal \n";
			cout << "5. Conversion from Binary to Octal \n";
			cout << "6. Conversion from Octal to Binary \n";
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
			cout << "\nEnter decimal number : ";
			cin >> n;
			cout << endl;
			ConvertDecimalToBinary(n);
			break;
		}
		case 2:
		{
			cout << "\nEnter binary number : ";
			cin >> n;
			cout << endl;
			ConvertBinaryToDecimal(n);
			break;
		}
		case 3:
		{
			cout << "\nEnter decimal number : ";
			cin >> n;
			cout << endl;
			ConvertDecimalToOctal(n);
			break;
		}
		case 4:
		{
			cout << "\nEnter octal number : ";
			cin >> n;
			cout << endl;
			ConvertOctalToDecimal(n);
			break;
		}
		case 5:
		{
			cout << "\nEnter octal number : ";
			cin >> n;
			cout << endl;
			ConvertOctalToBinary(n);
			break;
		}
		case 6:
		{
			cout << "\nEnter binary number : ";
			cin >> n;
			cout << endl;
			ConvertBinaryToOctal(n);
			break;
		}
		default:
		{
			cout << "Invalid option!!!\n";
			break;
		}
		}
		cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
		cout << "\nDo you want to continue (Y/N)?\n";
		cin >> c;

	} while (c == 'y' || c == 'Y');
}

void ConvertDecimalToBinary(int number)
{
	int ans = 0, rem = 0, multiply = 1;

	while (number > 0)
	{
		rem = number % 2;	// This can be optimized to rem = num & 1;
		number = number / 2;	// number = number >> 1;
		ans = rem * multiply + ans;	// shift the rem 
		multiply = multiply * 10;	// increase the tens digit
	}
	cout << "\nBinary Number = " << ans;
}


void ConvertBinaryToDecimal(int number)
{
	int ans = 0, rem = 0, multiply = 1;

	while (number > 0)
	{
		rem = number % 10;	
		number = number / 10;	
		ans = rem * multiply + ans;	// shift the rem 
		multiply = multiply * 2;	// increase the tens digit
	}
	cout << "\Decimal Number = " << ans;
}

void ConvertDecimalToOctal(int number)
{
	int ans = 0, rem = 0, multiply = 1;

	while (number > 0)
	{
		rem = number % 8;	
		number = number / 8;	
		ans = rem * multiply + ans;	// shift the rem 
		multiply = multiply * 10;	// increase the tens digit
	}
	cout << "\Octal Number = " << ans;
}

void ConvertOctalToBinary(int number)
{
	int ans = 0, rem = 0, multiply = 1;
	// Covert Octal to Decimal and then Decimal to Binary
	int base = 8;
	while (number > 0)
	{
		rem = number % 10;
		number = number / 10;
		ans = rem * multiply + ans;	// shift the rem 
		multiply = multiply * base;	// increase the tens digit
	}

	number = ans;
	ans = 0, rem = 0, multiply = 1;
	while (number > 0)
	{
		rem = number % 2;	// This can be optimized to rem = num & 1;
		number = number / 2;	// number = number >> 1;
		ans = rem * multiply + ans;	// shift the rem 
		multiply = multiply * 10;	// increase the tens digit
	}
	cout << "\nBinary Number = " << ans;
}


void ConvertBinaryToOctal(int number)
{
	int ans = 0, rem = 0, multiply = 1;

	while (number > 0)
	{
		rem = number % 10;
		number = number / 10;
		ans = rem * multiply + ans;	// shift the rem 
		multiply = multiply * 2;	// increase the tens digit
	}
	number = ans;
	ans = 0, rem = 0, multiply = 1;
	while (number > 0)
	{
		rem = number % 8;
		number = number / 8;
		ans = rem * multiply + ans;	// shift the rem 
		multiply = multiply * 10;	// increase the tens digit
	}
	cout << "\Octal Number = " << ans;
}

void ConvertOctalToDecimal(int number)
{
	int ans = 0, rem = 0, multiply = 1;
	int base = 8;
	while (number > 0)
	{
		rem = number % 10;
		number = number / 10;
		ans = rem * multiply + ans;	// shift the rem 
		multiply = multiply * base;	// increase the tens digit
	}
	cout << "\Decimal Number = " << ans;
}
