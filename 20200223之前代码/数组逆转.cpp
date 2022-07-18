#include <iostream>;
using namespace std;

int n[10];
int main()
{
	//ÊäÈëÊı×Ö
	cout << "Enter 10 numbrs: ";
	for (int i = 0; i < 10; i++)
		cin >> n[i];

	int size = 9;
	for (int j = 0; j < 5; j++,size--)
	{
		int tem = n[j];
		n[j] = n[size];
		n[size] = tem;
	}

	for (int j = 0; j < 10; j++)
		cout << n[j] << "  ";

	return 0;
}