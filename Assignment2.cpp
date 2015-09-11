// Money Changer: Assignment 2 for CS161 Goble
// Oct 9, 2011
// Author: Mia Armstrong
// Sources: None
// Compiled with: Visual C++ 2008 Express Edition

#include <iostream>
#include <iomanip>          // You need this include for fixed and setprecision below.
#include <string>

using namespace std;
// Named constants.
const double POUNDS_CONVERSION = 0.6452;
const double EURO_CONVERSION = 0.7410;
const double PENNY = 0.01;
const double NICKEL = 0.05;
const double DIME = 0.10;
const double QUARTER = .25;
const double DOLLAR = 1.00;

int main ()
{
  

    cout << fixed;            // Set the output stream to display floating point numbers..
                              // ... in fixed point notation rather than scientific notation.
    cout << setprecision(2);  // Set the output stream to display exactly 2 places of decimals...
                              // ... just like a U.S. currency is displayed
	// Declare variables.
	double euro;
	double pounds;
	int pennyAmt;
	int nickelAmt;
	int dimeAmt;
	int quarterAmt;
	int dollarAmt;
	double totalUS;
	
    // Handle the user dialog
    cout << "Welcome to Mia Armstrong's Currency Converter" << endl;
	cout << "How many dollars do you have:";
    cin >> dollarAmt;
	cout << "How many quarters do you have:";
    cin >> quarterAmt;
	cout << "How many dimes do you have:";
    cin >> dimeAmt;
	cout << "How many nickels do you have:";
	cin >> nickelAmt;
	cout << "How many pennies do you have:";
	cin >> pennyAmt;


    // Calculate the results
    totalUS = dollarAmt * DOLLAR + quarterAmt * QUARTER + dimeAmt * DIME + nickelAmt * NICKEL + pennyAmt * PENNY;
	pounds = totalUS * POUNDS_CONVERSION;
	euro = totalUS * EURO_CONVERSION;


    // Output the results
	cout << "You have $" << totalUS <<"." << endl;
	cout << "This is the equivalent to " << pounds <<" pounds and " << euro <<" euros." << endl;
	cout << "Thank you for using Mia Amrstrong's Currency Converter." << endl;


    // "Pause" so the user can see the results
    char reply;
    cout << "Enter q to quit... ";
    cin >> reply;
    return 0;
}
