#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int counts(const char s[]);
char s[10000];
int lenth = 0;

int main()
{
	cout << "Ener a string: ";
	cin.getline(s, 10000);
	counts(s);
	
	return 0;
}

/*unsigned int strlen(char s[])
{
	
	for (; s[lenth] != '\0'; lenth++);

	return 0;
}*/


int counts(const char s[])
{
	int Count = 0;
	//for (i = 0; 's[i]' - 'a' >= 0 && 's[i]' - 'a' <= 'z' - 'a' && s[i] != '\0'; i++);

	//C字符串长度
	for (; s[lenth] != '\0'; lenth++);

	//字母数量
	for (int i = 0; i < lenth; i++)
	{
		if (tolower(s[i]) - 'a' >= 0 && tolower(s[i]) - 'a' <= 'z' - 'a')
			Count++;
	}


	cout << "The number of letters in " << s << " is " << Count;

	return 0;
}