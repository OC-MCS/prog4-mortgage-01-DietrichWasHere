#pragma once
// header file for Mortgage class
// hold info, functions for mortgage calculations
class Mortgage
{
	private:
		float loan; // total loan under mortgage
		float rate; // rate of interest
		int years; // years mortgage lasts
	public:
		Mortgage();
		void setLoan(float);
		void setRate(float);
		void setYears(int);
		float getMonthlyPayment();
		float getTotalPayment();
};
