#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void SimpleCharacterArray();
void FixedSizeCharacterArray();
void StringPrograms();
string ReverseString(string str);
int StringLength(string str);
bool IsStringPalindrome(string str);

int main()
{
	char c = 'y';
	int option = 0;
	bool bContinue = true;
	do
	{
		bool bValidInput = false;

		while (!bValidInput)
		{
            std::cout << "\n\n~~~~~~~~~~~~~~~ STRING PROGRAMS ~~~~~~~~~~~~~~~~\n\n";
			cout << "Choose Options From Below:\n\n";
			cout << "1. Simple Character Array \n";
			cout << "2. Fixed Size Character Array \n";
			cout << "3. String Programs \n";
			cout << "4. Find Length of String \n";
			cout << "5. Reverse a String \n";
			cout << "6. Check if String is Palindrome \n";
			cout << "9. Exit\n";
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
			SimpleCharacterArray();
			break;
		}
		case 2:
		{
			FixedSizeCharacterArray();
			break;
		}
		case 3:
		{
			StringPrograms();
			break;
		}
		case 4:
		{
			string str;
			cout << "Enter a string: ";
			cin.ignore(); // to ignore the newline character left in the input buffer
			getline(cin, str);
			cout << "Length of string is " << StringLength(str) << endl;
			break;
		}
		case 5:
		{
			string str;
			cout << "Enter a string: ";
			//cin.ignore(); // to ignore the newline character left in the input buffer
			//getline(cin, str);
			cin >> str; // cin works fine here as we are not considering spaces in string
			cout << "Reversed string is " << ReverseString(str) << endl;
			break;
		}
		case 6:
		{
			string str;
			cout << "Enter a string: ";
			cin.ignore(); // to ignore the newline character left in the input buffer
			getline(cin, str);
			if (IsStringPalindrome(str))
				cout << "String is palindrome" << endl;
			else
				cout << "String is not palindrome" << endl;
			break;
		}
		case 9:
			bContinue = false;
			break;
		default:
		{
            std::cout << "Invalid option!!!\n";
			break;
		}
		}
	} while (bContinue);

	return 0;
}

void SimpleCharacterArray()
{
	char arr[] = { 'a', 'p','p','l','e' };	// known length of characters

	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i];
	}

	std::cout << endl;
}

void FixedSizeCharacterArray()
{
	char arr2[10];	// pre-defined or assumed the length of characters
	cout << "\nEnter a string: ";
	cin >> arr2;  //does not limit the number of characters it reads. If user enters more than 10 characters it will overrun the 10 byte arr2 buffer, causing undefined behavior and stack corruption.
	arr2[9] = '\0';
	cout << endl;
	cout << arr2;		// This will not work if input is more than predefined size

	//To safely read input into a fixed - size array, limit the number of characters read by using setw from <iomanip>
	cout << "\nEnter a string: ";
	cin >> setw(10) >> arr2;  // read at most 9 characters + null terminator
	cout << endl;
	cout << arr2;

	/*
	* setw(10) tells cin to read up to 9 characters, reserving 1 byte for the '\0' null terminator.
	* This avoids buffer overflows and keeps the stack intact.
	*/

	cout << endl;
}

void StringPrograms()
{
	// Strings
	string s = "Sahil";
	cout << s;

	cout << endl;

	string s2;
	//cin >> s2;	cin will stop reading if it encounters space, tab or enter.
	// use getline
	cout << "\nEnter a string: ";
	getline(cin, s2);
	cout << s2;
	cout << "\nsize of string " << s2.size();

	// Concat string
	string s3 = s + s2;
	cout << endl << s3;

	// append character
	s3.push_back('p');
	s3.append("New string");
	s3 = s3 + 'p';
	s3 = s3 + "New String";

	s3.pop_back();

	cout << s3 << endl;
}

string ReverseString(string str)
{
	int start = 0, end = str.size() - 1;
	while (start < end)
	{
		swap(str[start], str[end]);
		start++, end--;
	}
	return str;
}

int StringLength(string str)
{
	int i = 0, i2 = 0;

	// approach 1
	while (str[i] != '\0')
		i++;

	// approach 2
	for(char c : str)
		i2++;

	return i;
}

bool IsStringPalindrome(string str)
{
	int start = 0, end = str.size() - 1;

	if(str.size() == 0)
		return false;

	while (start < end)
	{
		// skip non-alphanumeric characters
		while (start < end && !isalnum(str[start])) start++;
		while (start < end && !isalnum(str[end])) end--;

		// compare characters in a case-insensitive manner
		if (tolower(str[start]) != tolower(str[end])) return false;

		start++; end--;
	}

	return true;
}