#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;
	input.open("numbers.txt");
	int score1, score2, score3;
	input >> score1 >> score2 >> score3;
	cout << "Total score is " << score1 + score2 + score3 << endl;

	input.close();
	cout << "Done" << endl;

	return 0;
}