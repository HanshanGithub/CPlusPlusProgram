#include <iostream>
#include <string>
#include <cstring>
using namespace std;
char s[1000];

int main()
{
	cout << "Enter a C-string: ";
	cin.getline(s, 1000);
	int i = 0;
	for (; s[i] != '\0'; i++);
	cout << s[2];

	return 0;
}
//C×Ö·û´®³¤¶ÈÊä³ö
/*int main()
{
	cout << "Enter a C-string: ";
	cin.getline(s, 1000);
	int i = 0;
	for (; s[i] != '\0'; i++);
	cout << i;
	cout << "C-string length is: " << i;

	return 0;
}*/