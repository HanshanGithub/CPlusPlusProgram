# include <iostream>
using namespace std;

int main()
{
	int day = 0;
	char answer;
	cout << "Is your birthday in Set1 ?" << endl; // << endl; 和 \n有什么区别
	cout << " 1  3  5  7\n 9 11 13 15\n17 19 21 23\n25 27 29 31";
	cout << "\nEnter N/n for no and Y/y for yes: ";
	cin >> answer;
	if (answer == 'Y' || answer == 'y')
		day += 1;

	cout << "Is your birthday in Set2 ?" << endl; // << endl; 和 \n有什么区别
	cout << " 2  3  6  7\n10 11 14 15\n18 19 22 23\n26 27 30 31";
	cout << "\nEnter N/n for no and Y/y for yes: ";
	cin >> answer;
	if (answer == 'Y' || answer == 'y')
		day += 2;

	cout << "Is your birthday in Set3 ?" << endl; // << endl; 和 \n有什么区别
	cout << " 4  5  6  7\n12 13 14 15\n20 21 22 23\n28 29 30 31";
	cout << "\nEnter N/n for no and Y/y for yes: ";
	cin >> answer;
	if (answer == 'Y' || answer == 'y')
		day += 4;

	cout << "Is your birthday in Set4 ?" << endl; // << endl; 和 \n有什么区别
	cout << " 8  9 10 11\n12 13 14 15\n24 25 26 27\n28 29 30 31";
	cout << "\nEnter N/n for no and Y/y for yes: ";
	cin >> answer;
	if (answer == 'Y' || answer == 'y')
		day += 8;

	cout << "Is your birthday in Set5 ?" << endl; // << endl; 和 \n有什么区别
	cout << "16 17 18 19\n20 21 22 23\n24 25 26 27\n28 29 30 31";
	cout << "\nEnter N/n for no and Y/y for yes: ";
	cin >> answer;
	if (answer == 'Y' || answer == 'y')
		day += 16;

	cout << "Your birthday is " << day;


	return 0;  
 }