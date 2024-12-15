
#include <iostream>
using namespace std;

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
	cout << "Enter Marks " ;
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