#include "Loops.h"
#include <iostream>
#include "ForLoopProgram.h"
using namespace std;


void RunLoopPrograms()
{
	char c = 'y';
	int option = 0, rows, cols;
	do
	{
		bool bValidInput = false;

		while (!bValidInput)
		{
			cout << "\n\n~~~~~~~~~~~~~~ LOOPS ~~~~~~~~~~~~~~\n\n";
			cout << "Choose Options From Below:\n\n";
			cout << "1. For Loop Programs\n";
			cout << "2. Do While Loop Programs\n";
			cout << "3. While Loop Programs\n";
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
				RunForLoopProgram();
				break;
			}
			//case 2:
			//{
			//	RunDoWhileLoopProgram();
			//	break;
			//}
			//case 3:
			//{
			//	RunWhileLoopProgram();
			//	break;
			//}
			default:
			{
				cout << "Invalid option!!!\n";
				break;
			}
		}
		cout << "\n\n~~~~~~~~~~~~~~ LOOPS ~~~~~~~~~~~~~~\n\n";
		cout << "\nDo you want to continue (Y/N)?\n";
		cin >> c;

	} while (c == 'y' || c == 'Y');
}
