#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	cout << "Loan Amount: " ;
	int _1, _2, _3;
	cin >> _1 ;
	cout << "Number of Years: " ;
	cin >> _2;
	cout << setw(25)<<left << "Interest Rate"  << setw(25) << left << "Monthly Payment" << setw(25) << left << "Total Payment";

	return 0;
}