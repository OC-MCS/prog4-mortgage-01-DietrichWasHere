#pragma once
// header file for Mortgage class
// hold info, functions for mortgage calculations
class Mortgage
{
	private:
		float loan;
		float rate;
		int years;
	public:
		Mortage();
		void setLoan(float);
		void setRate(float);
		void setYears(int);
		float getMonthlyPayment();
		float getTotalMortagePayment();
};
