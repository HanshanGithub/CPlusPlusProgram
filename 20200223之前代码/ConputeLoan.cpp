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

	// �Ƿ�ѡ�����static_cast<int>����Ӱ��������򣿣���
	// static_cast<int>��  ��int����ͬ��Ϊ�β���Ч��������˵������static_cast<int>�ᵼ�³������ѣ�������û�з���
	totalPayment = static_cast<int>(totalPayment * 100) / 100.0;
	cout << " The monthl payment is " << monthlyPayment << endl << " The  total Payment is  " << totalPayment << endl;

	return 0;
}