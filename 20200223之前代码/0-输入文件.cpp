#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream output;
	output.open("numbers.txt");
	output << 95 << " " << 46 << "  " << 34;
	output.close();
	cout << "Done" << endl;

	return 0;
}