#include <iostream>
using namespace std;

int main()
{
	//也可以建立一个二维数组手动输入，还不用那么多''符号！
	char answer[8][10];
	cout << "Enter the everyone opino: " << endl;
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 10; j++)
			cin >> answer[i][j];

	/*char answer[8][10] =
	{
		{'A','B','A','C','C','D','E','E','A','D'},
		{'D','B','A','B','C','A','E','E','A','D'},
		{'E','D','D','A','C','B','E','E','A','D'},
		{'C','B','A','E','D','C','E','E','A','D'},
		{'A','B','D','C','C','D','E','E','A','D'},
		{'B','B','E','C','C','D','E','E','A','D'},
		{'B','B','A','C','C','D','E','E','A','D'},
		{'E','B','E','C','C','D','E','E','A','D'},
	};*/

	char key[] = { 'D','B','D','C','C','D','A','E','A','D' };

	for (int i = 0; i < 8; i++)
	{
		int count = 0;
		for (int j = 0; j < 10; j++)
		{
			if (answer[i][j] == key[j])
				count++;
		}
		cout << "Student " << i << " 's correct count is " << count << endl;
	}

	return 0;
}