#include <iostream>
using namespace std;

int main()
{
	double radius;
	cout << "Enter the radius and length of a cylinder: ";
	cin >> radius;
	int length;
	cin >> length;
	double area = radius * radius * 3.14159;
	double volume = area * length;
	cout << "The area is " << area << endl << "The volume is " << volume;
	//���������ʣ�endl int double �������кβ�һ�����ƺ����Ѿ��ϲ��ˣ���֪����ô��������ʲô����
	//����֪����ʽ�����ӣ��׽�ȥ�����ǲ���������������

	return 0;
}
