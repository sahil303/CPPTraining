
#include <iostream>
#include <string>

using namespace std;

// user-defined data type
// class is a blueprint for creating objects
class Student
{
	// By default, members of a class are private
	string StudentName;
	int StudentAge;
	int StudentRollNo;
	int StudentMarks;

public:
	void setName(string name)
	{
		StudentName = name;
	}

	string getName()
	{
		return StudentName;
	}

	int getAge()
	{
		return StudentAge;
	}

	void setAge(int age)
	{
		StudentAge = age;
	}

	int getRollNo()
	{
		return StudentRollNo;
	}

	void setRollNo(int rollNo)
	{
		StudentRollNo = rollNo;
	}

	int getMarks()
	{
		return StudentMarks;
	}

	void setMarks(int marks)
	{
		StudentMarks = marks;
	}


};

int main()
{
	/*
	// For Student 1
	string StudentName;
	int StudentAge;
	int StudentRollNo;
	int StudentMarks;

	cout << "Enter Student Name: ";
	getline(cin, StudentName);
	cout << "Enter Student Age: ";
	cin >> StudentAge;
	cout << "Enter Student Roll Number: ";
	cin >> StudentRollNo;
	cout << "Enter Student Marks: ";
	cin >> StudentMarks;

	// For Student 2
	string StudentName2;
	int StudentAge2;
	int StudentRollNo2;
	int StudentMarks2;

	cout << "Enter Student Name: ";
	getline(cin, StudentName2);
	cout << "Enter Student Age: ";
	cin >> StudentAge2;
	cout << "Enter Student Roll Number: ";
	cin >> StudentRollNo2;
	cout << "Enter Student Marks: ";
	cin >> StudentMarks2;
	*/
	// We need to repeat the above code for every new student
	// This is not efficient and leads to code duplication
	// We can use classes to encapsulate student data and behavior
	
	Student student1;
	// public members can be accessed using the dot operator
	/*student1.StudentName = "Harry";
	student1.StudentAge = 14;
	student1.StudentRollNo = 1;
	student1.StudentMarks = 85;

	cout << student1.StudentName << " " << student1.StudentAge << " "
		<< student1.StudentRollNo << " " << student1.StudentMarks << endl;
		*/

	student1.setName("Harry");
	student1.setAge(14);
	student1.setRollNo(1);
	student1.setMarks(85);

	// objects is an instance of a class
	// It is an entity that holds data and behavior defined by the class


}

