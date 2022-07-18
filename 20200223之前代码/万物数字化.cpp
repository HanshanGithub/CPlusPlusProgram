#include <iostream>
#include <ctime>
using namespace std;

void createArray(char[]);
void displayArray(const char[]);
void countLetters(const char[], int[]);
void displayCounts(const int[]);

int main()
{
	char chars[100];
	createArray(chars);
	cout << "The lowercase letters are:	" << endl;
	displayArray(chars);
	int counts[26];
	countLetters(chars, counts);
	cout << "\nThe occurrences of each letter are: " << endl;
	displayCounts(counts);
}

void createArray(char chars[])
{
	srand(time(0));
	for (int i = 0; i < 100; i++)
		chars[i] = static_cast<char>('a' + rand() % ('z' - 'a' + 1));

}

void displayArray(const char chars[])
{
	for (int i = 0; i < 100; i++)
	{
		if ((i + 1) % 20 == 0)
			cout << chars[i] <<" " << endl;
		else
			cout << chars[i] << " ";
	}
}

void countLetters(const char chars[], int counts[])
{
	for (int i = 0; i < 26; i++)
		counts[i] = 0;

	for (int i = 0; i < 100; i++)
		counts[chars[i] - 'a']++;

}

void displayCounts(const int counts[])
{
	for (int i = 0; i < 26; i++)
	{
		if ((i + 1) % 10 == 0)
			cout << static_cast<char>(i + 'a') << ":" << counts[i] << "  " << endl;
		else
			cout << static_cast<char>(i + 'a') << ":" << counts[i] << "  ";
	}
}