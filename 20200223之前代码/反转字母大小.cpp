#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void swap( char s1[],  char s2[]);
//const char s1[]: s1数组元素不可被修改，31、33行及不可实现，故s2并未赋值成功，不可实现。const 不可改变，而实际操作需要改变
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
	//求长度
	int length = 0;
	for (; s1[length] != '\0'; length++);

	//判断大小写,复制于另一数组
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