#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	char arr[] = { 'a', 'p','p','l','e' };	// known length of characters

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i];
	}

	cout << endl;

	/*char arr2[10];	// pre-defined or assumed the length of characters

	//cin >> arr2;  //does not limit the number of characters it reads. If user enters more than 10 characters it will overrun the 10				byte arr2 buffer, causing undefined behavior and stack corruption.
	//arr2[9] = '\0';
	//cout << endl;
	//cout << arr2;		// This will not work if input is more than predefined size
	
	//To safely read input into a fixed - size array, limit the number of characters read by using setw from <iomanip>
	cin >> setw(10) >> arr2;  // read at most 9 characters + null terminator
	cout << endl;
	cout << arr2;

	/*
	* setw(10) tells cin to read up to 9 characters, reserving 1 byte for the '\0' null terminator.
	* This avoids buffer overflows and keeps the stack intact.
	*/

	cout << endl;


	// Strings

	string s = "Sahil";
	cout << s;

	cout << endl;
 
	string s2; 
	//cin >> s2;	cin will stop reading if it encounters space, tab or enter.
	// use getline
	//getline(cin, s2);
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

	//cout << s3 << endl;

	// Reverse String
	string str;
	getline(cin, str);

	int start = 0, end = str.size() - 1;

	while (start < end)
	{
		swap(str[start], str[end]);
		start++, end--;
	}

	cout << "\nReverse String : " << str << endl;

	// Length of string

	int i = 0;

	while (str[i] != '\0')
		i++;

	cout << "Length of string " << i << endl;

	// Palindrome String
	cout << "Check string is palindrome\n";
	string str1;
	cin >> str1;

	start = 0, end = str1.size() - 1;

	while (start < end)
	{
		if (str1[start] != str1[end])
		{
			cout << "\n Not a Palindrome \n";
			return 0;
		}
		start++; end--;
	}

	cout << "\nPalindrome\n";
}
