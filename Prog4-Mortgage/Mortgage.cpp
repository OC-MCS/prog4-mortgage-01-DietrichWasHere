// implementation file for Mortgage class
#include "Mortgage.h"

// initialize values on creation
Mortgage::Mortgage()
{
	loan = 0.0;

}

// set total loan value to nLoan
void Mortgage::setLoan(float nLoan)
{
	loan = nLoan;
}

// set rate value to nRate
void Mortgage::setRate(float nRate)
{
	rate = nRate;
}

// set year value to nYear
void Mortgage::setYears(int nYear)
{
	years = nYear;
}

