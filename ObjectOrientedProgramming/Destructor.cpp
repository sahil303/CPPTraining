#include<iostream>
using namespace std;

class Customer {
	string name;
	int* accountNumber;

public:
	Customer() {
		cout << "Default constructor called" << endl;
		name = "Unknown";
		accountNumber = new int(0); // Dynamically allocate memory for accountNumber
		accountNumber = 0;
	}

	Customer(string name, int accountNumber) {
		this->name = name;
		this->accountNumber = new int(accountNumber); // Dynamically allocate memory for accountNumber
		cout << "Constructor called:" << name << endl;
	}

	~Customer() {
		delete accountNumber; // Free the dynamically allocated memory

		cout << "Destructor called for: " << name << endl;
	}

};

int main() {
	Customer customer1; // Default constructor is called
	Customer customer2("Alice", 100), customer3("Bob", 200); // Parameterized constructor is called
	// Destructor will be called in reverse order of construction when the objects go out of scope
	// Customer3 will be destroyed first, then customer2, and finally customer1
	// Because customer1 is created first, it will be destroyed last, and its destructor will be called after customer2 and customer3 have been destroyed
	// Reverse order of destruction is important to ensure that any resources allocated by the constructors are properly released by the destructors

	Customer* customer4 = new Customer("Charlie", 300); // Dynamically allocated object
	delete customer4; // Manually call the destructor for the dynamically allocated object
	return 0; 
}