#include <iostream>
#include <string>
using namespace std;

void prefix(const char s1[], const char s2[], char commom[]);
char s1[100], s2[100], common[100];

int main()
{
	cout << "Enter first sentence: ";
	cin.getline(s1, 100);
	cout << "Enter scened sentence: ";
	cin.getline(s2, 100);

	prefix(s1, s2, common);

	return 0;
}

void prefix(const char s1[], const char s2[], char commom[])
{
	int N = 0;
	while(s1[N] == s2[N])
	{
		common[N] = s1[N];
		N++;
	}
	/*tfor (int i = 0; s1[i] == s2[i]; i++)
	{
		common[i] = s2[i];
		N++;
		
	}*/

	
	
	if (N > 0)
		cout << "The common chars are: " << common << endl;
	else
		cout << "The two sentence have none common.";
}