#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	//����ʮ��������
	cout << "Enter a hex number: ";
	char hex[100];
	cin >> hex;
	
	int decimal = 0;

	//�洢hex����hexL
	int hexL;
	for (hexL = 0; hex[hexL] != '\0'; hexL++);

	//�Ƚϵ����ַ�
	bool isHex = true;

	for (int i = 0; i < hexL; i++)
	{
		hex[i] = toupper(hex[i]);
		if (hex[i] - 'A' >= 0 && hex[i] - 'A' < 6)
			decimal = decimal + ((10 + hex[i] - 'A') * pow(16, hexL - i - 1));
			//decimal = decimal * 16 + (10 + hex[i] - 'A');											//����˸�����������

			//decimal = decimal + ((10 + hex[i] - 'A') * pow(16, hexL - i - 1));					//A-F�����������1���Ϊ49������֣��㷨�������⣿��

		//decimalValue = decimalValue * 16 + hexCharToDecimal(hex[i]);								

		if (hex[i] - '0' >= 0 && hex[i] - '0' <= 9)
			//decimal = decimal * 16 + (10 + hex[i] - 'A');											//����˸���������������
			decimal = decimal + (hex[i] - '0') * pow(16, hexL - i - 1);

		else
		{
			isHex = false;
			break;
		}
	}

	cout << (isHex ? "The hex number's decimal is " : "You enter number is invalid.Please enter again.");

	if (decimal != 0)
		cout << decimal << endl;

	return 0;
}


//��ȷ��ʮ������תΪʮ���ƴ��룬���ǲ�֪����ô�ܳ�����
/*int hexDec(const string& hex);

int hexCharToDecimal(char ch);

int main()
{
	cout << "Enter a hex number: ";
	string hex;
	cin >> hex;

	cout << "The decimal value for hex number " << hex << " is " << hexDec(hex) << endl;

	return 0;
}

int hexDec(const string& hex)
{
	int decimalValue = 0;
	for (int i = 0; i < hex.size(); i++)
		decimalValue = decimalValue * 16 + hexCharToDecimal(hex[i]);

	return decimalValue;
}

int hexCharToDecimal(char ch)
{
	ch = toupper(ch);
	return(ch >= 'A' && ch <= 'F' ? 10 + ch - 'A' : ch - '0');
}*/

//������Ҳ�����������������Щ���⣬��Ȼ������ʾ��Ҫ��16���ƣ���Щì��