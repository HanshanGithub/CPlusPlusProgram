#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//��ȡ��34~ 55֮����������������䶨��34δ�õ���Ҳ�ò���
int main()
{
	srand(time(0));
	int number1 = 34 + rand() % 11;
	int number2 = 34 + rand() % 11;
	int right = number1 - number2;
	//��ȡ�������ڵ������������� + ����� �����䷶Χ�ڵ���
	cout << "������Ĵ�: \n";
	cout << number1 << " - " << number2 << " = ";
	int answer;
	cin >> answer;
	if (right == answer)
		cout << "You are excellent. ";
	else
		cout << " You are so careless. The ture answer is " << right;

	return 0;
}