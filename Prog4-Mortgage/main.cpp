//=====================================================
// Dietrich Versaw
// 2/20/19
// Programming 2 Assignment #4
// Description: Mortgage
//=====================================================

#include <iostream>
#include <iomanip>
#include "Mortgage.h"
#include <string>

using namespace std;
bool parseInt(string sval, int& val);
bool parseFloat(string sval, float& val);

// calc and display mortgage cost, monthly and total
int main()
{
	Mortgage userMort; // stores mortgage values input by user
	string input; // hold user input for conversion to number
	bool check = false; // used to ensure useable input 
	float holdF = 0; // holds input float;
	int holdI = 0; // holds input int
	cout << "Loan: $";
	cin >> input;
	check = parseFloat(input, holdF);
	while (!check)
	{
		cout << "Not valid loan amount!" << endl;
		cout << "Loan: $";
		cin >> input;
		check = parseFloat(input, holdF);
	}
	userMort.setLoan(holdF);
	check = false;
	cout << "Rate: %";
	cin >> input;
	check = parseFloat(input, holdF);
	while (!check)
	{
		cout << "Not valid interest rate!" << endl;
		cout << "Rate: %";
		cin >> input;
		check = parseFloat(input, holdF);
	}
	userMort.setRate(holdF);
	check = false;
	cout << "Years: ";
	cin >> input;
	check = parseInt(input, holdI);
	while (!check)
	{
		cout << "Not valid number of years!" << endl;
		cout << "Years: ";
		cin >> input;
		check = parseInt(input, holdI);
	}
	cout << left << setw(20) << "Monthly Payment:" << "$" << setprecision(2) << showpoint << fixed << userMort.getMonthlyPayment() << endl;
	cout << setw(20) << "Total Payment:" << "$" << setprecision(2) << showpoint << fixed << userMort.getTotalPayment() << endl;
}

// copy-paste from example file
// attempts to convert string to int, return via ref
// recieves string, int to put string into
// returns int via ref, bool to tell whether or not successful
// tests to see if value is above zero
bool parseInt(string sval, int& val)
{
	int num; // store temp val
	bool success = true; // return val, if num is usable
	try
	{
		num = stoi(sval);   // or use stof for string-to-float
		if (num > 0)
		{
			val = num;
		}
		else success = false;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}

// attempts to convert string to float, return via ref
// recieves string, float to put string into
// returns float via ref, bool to tell whether or not successful
// tests to see if value is above zero
bool parseFloat(string sval, float& val)
{
	float num; // store temp val
	bool success = true; // return val, if num is usable
	try
	{
		num = stof(sval);   // or use stof for string-to-float
		if (num > 0)
		{
			val = num;
		}
		else success = false;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}