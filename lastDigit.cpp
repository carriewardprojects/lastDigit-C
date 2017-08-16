// lastDigit.cpp : A simple C++ program that displays the last digit of a number
//

#include <iostream>
using namespace std;


int main()
{	
	// Sample data
	int number = 12345;
	int lastDigit = number % 10;

	// Sample number 12345
	cout << "The last digit of the number " << number << " is " << lastDigit << "\n";

	// --------------------------------------------------------------------------------------------

	int num;
	int lastRightDigit;
	int last2digits;
	int last3digits;

	// Request a number from the user
	cout << "\nEnter a 5-digit number: ";
	// Store the user data
	cin >> num;

	// Calculate the modulus of the number
	lastRightDigit = num % 10;
	last2digits = num % 100;
	last3digits = num % 1000;

	// Display the results
	cout << "\nThe last digit of your number " << num << " is: " << lastRightDigit;
	cout << "\nThe last two digits of your number " << num << " are: " << last2digits;
	cout << "\nThe last three digits of your number " << num << " are: " << last3digits << "\n\n";

	return 0;
}

