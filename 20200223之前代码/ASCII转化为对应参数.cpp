#include <iostream>
using namespace std;

//ASCIIת��Ϊ����
int main()
{
	cout << "����һ��ASCII��ֵ����ASCIIֵ��0-127֮���������: ";
	int x;
	cin >> x;
	char X = static_cast<char>(x);
	cout << x << "��Ӧ������Ϊ  " << endl << X;

	return 0;
}


//����ת��ΪASCII
/*
#include <iostream>
using namespace std;

int main()
{
	cout << "����һ��ASCII��ֵ����ASCIIֵ��0-127֮���������: ";
	char x;
	cin >> x;
	int X = static_cast<char>(x);
	cout << x << "��Ӧ������Ϊ  " << endl << X;

	return 0;
}*/