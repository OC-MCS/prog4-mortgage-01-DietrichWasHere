// implementation file for Mortgage class
#include "Mortgage.h"
#include <cmath>
using namespace std;

// initialize values on creation
Mortgage::Mortgage()
{
	loan = 0.0;
	rate = 0.0;
	years = 0;
}

// set total loan value to nLoan
void Mortgage::setLoan(float nLoan)
{
	loan = nLoan;
}

// set rate value to nRate
void Mortgage::setRate(float nRate)
{
	rate = nRate / 100;
}

// set year value to nYear
void Mortgage::setYears(int nYear)
{
	years = nYear;
}

// use class values (Loan, Rate, and Float) to calc monthly payment
// returns the payment
float Mortgage::getMonthlyPayment()
{
	float term, payment;
	// not entirely sure what term does; value in equation
	// payment holds return value
	term = pow((1 + (rate / 12)), 12 * years);
	payment = (loan * (rate / 12) * term) / (term - 1);
	return payment;
}

// use class values (Loan, Rate, and Float) to calc monthly payment
// returns the payment
float Mortgage::getTotalPayment()
{
	float term, payment;
	// not entirely sure what term does; value in equation
	// payment holds return value
	term = pow((1 + (rate / 12)), 12 * years);
	payment = ((loan * (rate / 12) * term) / (term - 1)) * 12 * years;
	return payment;
}