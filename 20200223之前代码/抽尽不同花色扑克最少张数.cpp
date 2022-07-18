#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	//�����˿˻�ɫ�͵���������
	int deck[52];
	string suits[] = { "Spades", "Herts", "Diamonds", "Clubs" };
	string ranks[] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };

	//�����˿�������������
	for (int i = 0; i < 52; i++)
		deck[i] = i;

	//���˿���ϴ��
	srand(time(0));
	for (int i = 0; i < 52; i++)
	{
		int index = rand() % 52;
		int tem = deck[i];
		deck[i] = deck[index];
		deck[index] = tem;

	}

	int pick = 0;
	string suitS[4];
	//suitS[i] = suits[deck[i] / 13];
	//���ѡȡ�˿��Ƶ����ͻ�ɫ������
	for (int i = 0; i < 4; pick++)
	{
		suitS[i] = suits[deck[(rand() % 52)] / 13]; //��ɫ
		string rank = ranks[deck[(rand() % 52)] % 13]; //����
		
		if (suitS[i] != suitS[i - 1] && suitS[i] != suitS[i - 2] && suitS[i] != suitS[i - 3])
		{
			cout << rank << " of " << suitS[i] << endl;
			i++;
		}
	}

	cout << "Number of pick: " << pick;

	return 0;
}