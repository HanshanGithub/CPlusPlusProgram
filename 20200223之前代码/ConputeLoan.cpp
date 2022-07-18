#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << " Enter yearly interest rate, for example 7.25: ";
	double annualInterestRate;
	cin >> annualInterestRate;
	double monthlyInterestRate = annualInterestRate / 1200;
	cout << "Enter number of years as an integer, for example 5: ";
	int numberOfYears;
	cin >> numberOfYears;
	cout << "Enter loan amount, for example 12000.95: ";
	double loanAmount;
	cin >> loanAmount;
	double monthlyPayment = loanAmount * monthlyInterestRate / (1 - 1 / pow(1 + monthlyInterestRate, numberOfYears * 12));
	double totalPayment = monthlyPayment * numberOfYears * 12;
	monthlyPayment = static_cast<int>(monthlyPayment * 100) / 100.0;

	// 是否选择加入static_cast<int>都不影响输出程序？？？
	// static_cast<int>与  （int）相同，为何不见效果，理论说明不加static_cast<int>会导致程序提醒，但是我没有发现
	totalPayment = static_cast<int>(totalPayment * 100) / 100.0;
	cout << " The monthl payment is " << monthlyPayment << endl << " The  total Payment is  " << totalPayment << endl;

	return 0;
}