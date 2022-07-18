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

	//选取前四张扑克牌点数和花色及张数
	for (int i = 0; i < 4; i++)
	{
		string suit = suits[deck[i] / 13];
		string rank = ranks[deck[i] % 13];
		cout << "Card number " << deck[i] << ": " << rank << " of " << suit << endl;
	}

	return 0;
}