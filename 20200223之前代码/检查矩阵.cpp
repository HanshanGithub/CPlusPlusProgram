#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	//¼������Ԫ��
	srand(time(0));
	int m[4][4];
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			m[i][j] = rand() % 2;

	//��ʾ����Ԫ��
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << m[i][j] << " ";
		cout << endl;
	}

	//���ÿ������
	int C1 = 0;
	for (int i = 0; i < 4; i++)
	{
		if (m[i][0] == m[i][1] && m[i][0] == m[i][2] && m[i][0] == m[i][3])
		{
			cout << "All " << m[i][0] << "'s" << " on row " << i << endl;
			C1++;
		}
	}
	if (C1 == 0)
		cout << "No same nubers on a line." << endl;

	//���ÿ������
	int C2 = 0;
	for (int i = 0; i < 4; i++)
	{
		if (m[0][i] == m[1][i] && m[0][i] == m[2][i] && m[0][i] == m[3][i])
		{
			cout << "All " << m[0][i] << "'s" << " on line " << i << endl;
			C2++;
		}
	}
	if (C2 == 0)
		cout << "No same nubers on a column." << endl;

	return 0;
}