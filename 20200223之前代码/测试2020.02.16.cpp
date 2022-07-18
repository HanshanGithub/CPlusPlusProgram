#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	char s1[200] = "Life is not a simple thing.";
	char s2[200];
	for (int i = 0; i < 10; i++)
		s2[i] = s1[i];
	for (int i = 0; i < 10; i++)
		cout << s2[i];

	return 0;
}



//²âÊÔC×Ö·û´®¼°C×Ö·û´®º¯Êý
/*int main()
{
	char s1[100];
	cout << "Enter a sentence: ";
	cin.getline(s1, 30);  //ÊäÈëº¬¿Õ¸ñµÄ×Ö·û: weil come to YiBin
	cout << "You entered sentence is: " << s1;

	return 0;
}*/



/*int main()
{
	cout << "Interest Rate" << "    " << "Monthly Payment" << "    " << "Total Payment" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout <<left<< setw(17) << i + 4 << setw(19) << i * 3 << setw(17) << i << endl;
	}

	return 0;
}*/