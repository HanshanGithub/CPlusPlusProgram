#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	string lottery;
	srand(time(0));
	int digit = rand() % 10;
	lottery += static_cast<char>(digit + '0'); //<char>ǿ�ƽ��������ŵ�ASCIIת��Ϊ��0-9������
	digit = rand() % 10;
	lottery += static_cast<char>(digit + '0');
	//������Ͼ����������3���������Զ���N������
	/*
	digit = rand() % 10;
	lottery += static_cast<char>(digit + '0');
	cout << lottery; 
	*/

	return 0;
}