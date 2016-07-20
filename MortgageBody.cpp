#include "Mortgage.h"

double Mortgage::getLoanAmount() {
	return loanAmount;
}
double Mortgage::getAnnualInterestRate() {
	return annualInterestRate;
}
double Mortgage::getMonthlyInterestRate() {
	return monthlyInterestRate;
}
int Mortgage::getTotalYearsToRepay() {
	return totalYearsToRepay;
}
int Mortgage::getNumberOfPayments() {
	return numberOfPayments;
}