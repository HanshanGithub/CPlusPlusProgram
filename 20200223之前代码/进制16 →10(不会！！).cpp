#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	//����ʮ��������
	cout << "Enter a hex number: ";
	string hex;
	cin >> hex;

	//���ַ�������
	int length = hex.size();

	//����ʮ������
	int decimal = 0;

	//��ʽ����
	int L = length - 1;
	for (int i = 0; i < length; L --, i++)
	{
		if (hex.at(i) - 'A' < 0)
			decimal += hex.at(i) * pow(16, L);

		else if (hex.at(i) - 'A' >= 0 && hex.at(i) - 'A' <= 5)
		{
			//int value = static_cast<int>(10 + hex.at(i) - 'A');
			int value = 10 + hex.at(i) - 'A';
			decimal += value * pow(16, L);
		}
	}

	cout << "The " << hex << " decimal number is " << decimal << endl;

	return 0;
}
