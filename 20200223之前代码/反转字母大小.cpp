#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void swap( char s1[],  char s2[]);
//const char s1[]: s1����Ԫ�ز��ɱ��޸ģ�31��33�м�����ʵ�֣���s2��δ��ֵ�ɹ�������ʵ�֡�const ���ɸı䣬��ʵ�ʲ�����Ҫ�ı�
const int PV = 10000;
char s1[PV], s2[PV];

int main()
{
	cout << "Enter a sentence: ";
	cin.getline(s1, PV);

	swap(s1, s2);

	return 0;
}

void swap( char s1[],  char s2[])
{
	//�󳤶�
	int length = 0;
	for (; s1[length] != '\0'; length++);

	//�жϴ�Сд,��������һ����
	for (int i = 0; i < length; i++)
	{
		if (s1[i] - 'a' >= 0 && s1[i] - 'a' <= 'z' - 'a')
			s2[i] = toupper(s1[i]);
		else if (s1[i] - 'A' >= 0 && s1[i] - 'A' <= 'Z' - 'A')
			s2[i] = tolower(s1[i]);
	}

	cout << "The reversed sentence is: ";
	for (int i = 0; i < length; i++)
		cout << s2[i];
}