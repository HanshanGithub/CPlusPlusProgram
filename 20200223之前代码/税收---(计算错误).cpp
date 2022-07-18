#include <iostream>
using namespace std;

int main()
{
	cout << "(0-single filer, 1-married jointl," << "or qualifying widow(er), " << endl
		<< "2-married separetely, 3-head of household)" << endl << "Enter the filing status: ";
	int status;
	cin >> status;
	cout << "Enter the taxable income: ";
	double income;
	cin >> income;
	double tax = 0;
	if (status == 0)
	{
		if (income <= 8350)
			tax = income * 0.10;
		else if (income <= 33950)
			tax = 8350 * 0.10 + (income - 8350) * 0.15;
		else if (income <= 82250)
			tax = 8350 * 0.10 + (33950 - 8350) * 0.15 + (income - 33950) * 0.25;
		else if (income <= 171550)
			tax = 8350 * 0.10 + (33950 - 8350) * 0.15 + (82250 - 33950) * 0.25 + (income - 82250) * 0.28;
		else if (income <= 372950)
			tax = 8350 * 0.10 + (33950 - 8350) * 0.15 + (82250 - 33950) * 0.25 + (171550 - 82250) * 0.28 + (income - 171500) * 0.33;
		else
			tax = 8350 * 0.10 + (33950 - 8350) * 0.15 + (82250 - 33950) * 0.25 + (171550 - 82250) * 0.28 + (372950 - 171500) * 0.33 + (income - 372950) * 0.35;

	}
	else if (status == 1)
	{
		if (income <= 16700)
			tax = income * 0.10;
		else if (income <= 67900)
			tax = 16700 * 0.10 + (income - 16700) * 0.15;
		else if (income <= 137050)
			tax = 16700 * 0.10 + (67900 - 16700) * 0.15 + (income - 67900) * 0.25;
		else if (income <= 208850)
			tax = 16700 * 0.10 + (67900 - 16700) * 0.15 + (137050 - 67900) * 0.25 + (income - 137050) * 0.28;
		else if (income <= 372950)
			tax = 16700 * 0.10 + (67900 - 16700) * 0.15 + (137050 - 67900) * 0.25 + (208850 - 137050) * 0.28 + (income - 171500) * 0.33;
		else
			tax = 8350 * 0.10 + (33950 - 8350) * 0.15 + (82250 - 33950) * 0.25 + (208850 - 82250) * 0.28 + (372950 - 171500) * 0.33 + (income - 372950) * 0.35;

	}
	else if (status == 2);
	else if (status == 3);
	else
		cout << "Error: invalid status";
	cout << "Tax is " << static_cast<int>(tax * 100) / 100.0 << endl;

	return 0;
}