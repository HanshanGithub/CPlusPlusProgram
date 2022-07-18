#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter a decimal number: ";
	int decimal;
	cin >> decimal;

	string binary;
	while (decimal != 0)
	{
		int binaryValue = decimal % 2;
		char binaryChar = static_cast<char>(binaryValue + '0');

		binary = binaryChar + binary;
		decimal = decimal / 2;
	}

	cout << "The binary number is " << binary << endl;
	system("pause");
	return 0;
}