#include <iostream>
using namespace std;

int main()
{
	//¼��������Ϣ
	cout << "Enter the 10 points: \n";
	int points[8][2];
	for (int i = 0; i < 8; i++)
		cin >> points[i][0] >> points[i][1];

	//�ȶԵ�һ������Ԫ�ؽ�������
	int Points[8][2];
	bool changed = true;
	do 
	{
		changed = false;
		for(int i=0;i<7;i++)
			if (points[i][0] > points[i + i][0])
			{
				int tem = points[i + 1][0];
				points[i + i][0] = points[i][0];
				points[i][0] = tem;

				int Tem = points[i + 1][1];
				points[i + 1][1] = points[i][1];
				points[i][0] = Tem;

				changed = true;
			}
	} while (true); //points[i][0] �������

	for (int i = 0; i < 8; i++)
		cout << points[i][0] << ", " << points[i][1] << endl;

	return 0;
}