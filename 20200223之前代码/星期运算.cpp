#include <iostream>
using namespace std;

int main()
{
	cout << "���գ�0�� ��һ�� 1���ܶ���2 ...�Դ�����" << endl;
	cout << "���������������: ";
	int number0;
	cin >> number0;
	cout << "���������������: ";
	int number;
	cin >> number;
	//number������������				8
	cout << "Today is ";

	switch (number0)
	{
	case 0: cout << " Sunday"; break;
	case 1: cout << " Monday"; break;
	case 2: cout << "Tuesday"; break;
	case 3: cout << "Wednesday"; break;
	case 4: cout << "Thursday"; break;
	case 5: cout << "Friday"; break;
	case 6: cout << "Saturday"; break;
	}

	//number0 ������������	2

	int zhouqi = (number0 + number) % 7;	//			8
	cout  << " and the future day is ";
	switch (zhouqi)
	{
	case 0: cout <<  " Sunday"; break;
	case 1: cout << " Mondat"; break;
	case 2: cout << "Tuesday"; break;
	case 3: cout << "Wednesday"; break;
	case 4: cout << "Thursday"; break;
	case 5: cout << "Friday"; break;
	case 6: cout << "Saturday"; break;
	}

	return 0;
}