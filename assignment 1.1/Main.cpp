#include <iostream>
using namespace std;

int main() {
	// print out a message
	cout << "Hello, welcome my Awesome Menu Program!\n"; // endl
	int userChoice = 0;
	int celsius(0);
	int farenheit{0};
	while(userChoice != 3) {
		cout << "---------------------------------------\n";
		cout << "Menu Choices:\n";
		cout << "(1) for Converting Celsius to Farenheit\n" 
		<<"(2) for Converting Farenheit to Celsius\n" << "(3) to end the program\n";

		cout << "Choice: ";
		cin >> userChoice;

		if(userChoice == 1) {
			cout << "Item #1: Celsius to Farenheit\n";
			cout << "Enter a whole number for temperature conversion: ";
			cin >> celsius;
			farenheit = 1.8*celsius+32;
			cout << "The farenheit conversion of " 
				<< celsius << " degrees C is " 
				<< farenheit << " degrees F\n";
 			//F = 1.8*C+32
		} else if(userChoice == 2) {
			cout << "Item #2: Farenheit to Celsius\n";
			cout << "Enter a whole number for temperature conversion: ";
			cin >> farenheit;
			celsius = (farenheit-32)/1.8;
			cout << "The celsius conversion of "
				<< farenheit << " degrees F is "
				<< celsius << " degrees C\n";
			//F = 1.8*C+32
			// C = (F-32)/1.8
		} else if(userChoice == 3) {
			cout << "Goodbye!\n";
		} else {
			cout << "Bad choice!\n";
		}
	}

	// y/n if they want to	continue
	// y: then we have another menu


	//LOOP
	// no exits with a nice message
	// get a response from the user
	// and based on that response we are going to do 1,2,3 

	// print out goodbye
	//cout << "bye\n";
	return 0;
}
