// CPPBasics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "IfElse.h"
using namespace std;


int main()
{
#pragma region Basics I/O

    cout << "~~~~~~~~~~~~~Basics I/O~~~~~~~~~~~~~~~~~" << endl;
    // Basics input and output code
    int a, b;

    cout << "Enter First number" << endl;
    cin >> a;

    cout << "Enter second number" << endl;
    cin >> b;

    cout << "The sum of two numbers = " << a + b << endl;

    cout << "~~~~~~~~~~~~~ End of Basics I/O~~~~~~~~~~~~~~~~~" << endl;

#pragma endregion


#pragma region Type Casting

    cout << endl << "~~~~~~~~~~~~~Type Casting~~~~~~~~~~~~~~~~~" << endl;

    int i = 10;
    char c = 'b';

    i = c;  // Type casting from lower to higher

    cout << i << endl; // ASCII of b - 98

    i = 204764;

    c = i;  // Data loss as c can only store 1 byte and i has 4 byte

    cout << c << endl; // Random charcter

    cout << "~~~~~~~~~~~~~End of Type Casting~~~~~~~~~~~~~~~~~" << endl;

#pragma endregion


    RunIfElseProgram();

    return 0;

}
