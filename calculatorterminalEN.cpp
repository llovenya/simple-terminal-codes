#include <iostream> // The library with which we will work with terminal
using namespace std; // For convenience

bool Running = 1; // For a simple implementation of exiting the program further
char sym; // Variable for characters
float a; // 1 number
float b; // 2 number
int main()
{
	while(Running == 1){ // Cycle to repeat the program
		cout << "Hello, to continue enter sym: +; -; *; /; =(Comparing); Q(Exit)\n"; // Greeting
		cin >> sym;	// Entering a value into a variable "sym"
		switch (sym){  // I used switch for more simple implementation
		case '+': // +
			cout << "Enter 1 number: ";
			cin >> a;
			cout << "Enter 2 number: ";
			cin >> b;
			cout << "The sum of the numbers is equal to: " << a + b << endl;
			break;
		case '-': // -
			cout << "Enter 1 number: ";
			cin >> a;
			cout << "Enter 2 number: ";
			cin >> b;
			cout << "The difference of the numbers is equal to: " << a - b << endl;
			break;	 
		case '*': // *
			cout << "Enter 1 number: ";
			cin >> a;
			cout << "Enter 2 number: ";
			cin >> b;
			cout << "The product of the numbers is equal to: " << a * b << endl;
			break;
		case '/': //   '/'
			cout << "Enter 1 number: ";
			cin >> a;
			cout << "Enter 2 number: ";
			cin >> b;
			if (b != 0) // Division on 0
				cout << "The quotient of the numbers is " << a / b << endl;
			else
				cout << "Division by 0 is not possible\n";
			break;	
		case '=': // Comparing numbers
			cout << "Enter 1 number: ";
			cin >> a;
			cout << "Enter 2 number: ";
			cin >> b;
			if (a < b)
				cout << a << " < " << b << endl;
			else if (a > b)
				cout << a << " > " << b << endl;
			else if (a == b)
				cout << a << " = " << b << endl;
			break;
		case 'Q': // Exit
			cout << "Exit\n";
			Running = 0;
			break;
		}	
	}
	
	return 0;
}
