#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	//建立扑克花色和点数的数组
	int deck[52];
	string suits[] = { "Spades", "Herts", "Diamonds", "Clubs" };
	string ranks[] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };

	//建立扑克牌张数的数组
	for (int i = 0; i < 52; i++)
		deck[i] = i;

	//对扑克牌洗牌
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
	//随机选取扑克牌点数和花色及张数
	for (int i = 0; i < 4; pick++)
	{
		suitS[i] = suits[deck[(rand() % 52)] / 13]; //花色
		string rank = ranks[deck[(rand() % 52)] % 13]; //点数
		
		if (suitS[i] != suitS[i - 1] && suitS[i] != suitS[i - 2] && suitS[i] != suitS[i - 3])
		{
			cout << rank << " of " << suitS[i] << endl;
			i++;
		}
	}

	cout << "Number of pick: " << pick;

	return 0;
}