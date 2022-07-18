#include <iostream>
#include <string>
using namespace std;

int reverse(string s);
bool isP(int number);

int main()
{
	cout << "Enter the string: ";
	string s;
	getline(cin, s);
	reverse(s);

	return 0;
}

int reverse(string s)
{
	int low = 0, high = s.length() - 1;
	bool isPalindrome = true;
	while (low < high)
	{
		if (s[low] != s[high])
		{
			isPalindrome = false;
			break;
		}
		low++;
		high--;
	}

	if (isPalindrome)
		cout << s << " is a palindrome" << endl;
	else
		cout << s << " is not a palindrome" << endl;

	return 0;
}
/*
int main()
{
	cout << "Enter a string: ";
	string s;
	getline(cin, s);
	
	int low = 0, high = s.length() - 1;
	// low 开始必须为0，搞不明白--2020.01.28

	bool isPalindrome = true;
	while (low < high)
	{
		if (s[low] != s[high])
		{
			isPalindrome = false;
			break;
		}
		low++;
		high--;
	}
	
	if (isPalindrome)
		cout << s << " is a palindrome" << endl;
	else
		cout << s << " is not a palindrome" << endl;

	return 0;
}
*/