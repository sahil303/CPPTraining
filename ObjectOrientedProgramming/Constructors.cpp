#include<iostream>
using namespace std;

class Customer {
	string name;
	int accountNumber;
	int balance;

public:
	// Default constructor
	Customer() {
		cout << "Default constructor called" << endl;
		name = "Unknown";
		accountNumber = 0;
		balance = 0;
	}

	// Parameterized constructor
	// If we remove default constructor, we will not be able to create objects without providing parameters
	// Customer customer1; // This will cause a compilation error because there is no default constructor
	//Customer(string name, int accountNumber, int balance) {
	//	//this pointer is used to refer to the current object
	//	this->name = name;
	//	this->accountNumber = accountNumber;
	//	this->balance = balance;
	//}

	// Constructor overloading - multiple constructors with different parameters
	Customer(string name, int accountNumber) {
		this->name = name;
		this->accountNumber = accountNumber;
	}

	// Inline Constructor
	// We can define the constructor inside the class definition, which makes it an inline function
	inline Customer(string a, int b, int c) : name(a), accountNumber(b), balance(c) {}

	//Copy Constructor - creates a new object as a copy of an existing object
	// & is used to pass the object by reference to avoid infinite recursion
	Customer(const Customer &customer) {
		this->name = customer.name;
		this->accountNumber = customer.accountNumber;
		this->balance = customer.balance;
	}

	void display() {
		cout << "Name: " << name << endl;
		cout << "Account Number: " << accountNumber << endl;
		cout << "Balance: " << balance << endl;
	}
};

//int main() {
//	Customer customer1, customer2; // Default constructor is called
//	customer1.display();
//	Customer customer3("Alice", 12345, 1000); // Parameterized constructor is called
//	customer3.display();
//	Customer customer4("Bob", 67890); // Parameterized constructor with two parameters is called
//	customer4.display();
//	Customer customer5(customer3); // Copy constructor is called
//	customer5.display();
//	return 0;
//}