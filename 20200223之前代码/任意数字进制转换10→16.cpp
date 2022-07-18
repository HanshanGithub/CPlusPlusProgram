#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter a decimal number: ";
	int decimal;
	cin >> decimal;

	string hex;
	while (decimal != 0)
	{
		int hexValue = decimal % 16;
		char hexChar = (hexValue <= 9 && hexValue >= 0) ? static_cast<char>(hexValue + '0') : static_cast<char>(hexValue - 10 + 'A');

		hex = hexChar + hex;
		decimal = decimal / 16;
	}

	cout << "The hex number is " << hex << endl;

	return 0;
}



// 十进制转二进制

/*int main()
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

	return 0;
}*/
	