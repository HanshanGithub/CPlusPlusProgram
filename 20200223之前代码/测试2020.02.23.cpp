#include <iostream>
#include <string>
using namespace std;

/*int main()
{
	string value = "4D2";
	int L = value.size();
	cout << L << endl<<value.at(2) << endl;

	return 0;
}*/



//hex turn to decimal
int main()
{
	cout << "Enter a hex number: ";
	string hex;
	cin >> hex;
	int length = hex.size();
	int decimal = 0;

	for (int i = 0; i < length; length--, i++)
	{
		if (hex.at(i) - 'A' < 0)
		{
			decimal += hex.at(i) * pow(16, length - 1);
		}
		else
		{
			int value = 10 + hex.at(i) - 'A';
			decimal += value * pow(16, length - 1);
		}
	}
	cout << "The " << hex << " decimal number is " << decimal << endl;

	return 0;
}


// ½øÖÆ 10¡ú2 ×ª»»
/*int main()
{
	cout << "Enter a decimal number: ";
	int decimal;
	string binary;
	cin >> decimal;
	while (decimal != 0)
	{
		int binaryValue = decimal % 2;
		binary = static_cast<char>(binaryValue + '0') + binary;
		decimal /= 2;
	}
	cout << "The binary number is " << binary << endl;

	return 0;
}*/