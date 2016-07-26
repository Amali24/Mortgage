#include <iostream>
#include <iomanip>
#include "MortgageHeader.h"

using namespace std;

int main()
{

    cout << "Enter the amount of the loan: ";
    double loanAmount = getNum();

    cout << "Enter annual interest rate in decimal form (example .075 means 7.5%): ";
    double apr = getNum();

    while (apr > 1)
    {
        cout << "APR must be between 0 and 1 (remember: .075 mean 7.5%). Try again: ";
        apr = getNum();
    }

    cout << "Enter the length of the loan in years: ";
    int numYears = getInt();

    Mortgage mort1;

    mort1.setLoanAmount(loanAmount);
    mort1.setAnnualInterestRate(apr);
    mort1.calcMonthlyInterestRate();
    mort1.setTotalYearsToRepay(numYears);
    mort1.calcNumberOfPayments();
    mort1.calcTerm();

    cout << endl << fixed << showpoint << setprecision(2)
         << "Loan Amount: $" << mort1.getLoanAmount() << endl
         << setprecision(5)
         << "Annual Interest Rate: " << mort1.getAnnualInterestRate() << endl
         << "Monthly interest rate = " << mort1.getMonthlyInterestRate() << endl
         << "Term = " << mort1.getTerm() << endl
         << noshowpoint << setprecision(0)
         << "Years to repay: " << mort1.getTotalYearsToRepay() << endl
         << showpoint << setprecision(2)
         << "Monthly Payment: $" << mort1.calcMonthlyPayment() << endl
         << "Total Pay Back: $" << mort1.calcTotalPayment() << endl << endl;

    return 0;
}
