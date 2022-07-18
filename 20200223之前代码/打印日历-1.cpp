#include <iostream>
#include <iomanip>
using namespace std;

//���庯����
void printMonth(int year, int month);//-1������
void printMonthTitle(int year, int month);
void printMonthName(int month);
void printMonthBody(int year, int month);//-4������
int getStartDay(int year, int month);
int getTotalNumberOfDays(int year, int month);
int getNumberOfDaysInMonth(int year, int month);//-7������
bool isLeapYear(int year);

//����������
int test()
{
	//��ʾ������ݣ�
	cout << "Enter full year (e.h., 2001): ";
	int year;
	cin >> year;

	//��ʾ�����·ݣ�
	cout << "Enter month in number between 1 and 12: ";
	int month;
	cin >> month;

	//��ʾ����
	printMonth(year, month);

	return 0;
}

//����-1������
void printMonth(int year, int month)
{
	//������ת����һ�º����壬Ȼ��ص����Ƚ�������������
	printMonthTitle(year, month);

	printMonthBody(year, month);
}

//����-2������
void printMonthTitle(int year, int month)
{
	printMonthName(month);

	cout << " " << year << endl;
	cout << "--------------------------------" << endl;
	cout << " Sun\tMon\tTue\tWed\tThu\tFri\tSat" << endl;
}

//����-3������
void printMonthName(int month)
{
	switch (month)
	{
	case 1: cout << "January"; break;
	case 2: cout << "February"; break;
	case 3: cout << "March"; break;
	case 4: cout << "April"; break;
	case 5: cout << "May"; break;
	case 6: cout << "June"; break;
	case 7: cout << "July"; break;
	case 8: cout << "August"; break;
	case 9: cout << "September"; break;
	case 10: cout << "October"; break;
	case 11: cout << "Nobember"; break;
	case 12: cout << "December"; break;
	}
}

//����-4������
void printMonthBody(int year, int month)
{
	int startDay = getStartDay(year, month);

	int numberOfDaysInMonth = getNumberOfDaysInMonth(year, month);

	int i = 0;
	for (i = 0; i < startDay; i++)
		cout << "\t";

	for (i = 1; i <= numberOfDaysInMonth; i++);
	{
		cout << i << "\t";

		if ((i + startDay) % 7 == 0)
			cout << endl;
	}
}

//����-5������
int getStartDay(int year, int month)
{
	int startDay1800 = 3;
	int totalNumberOfDays = getTotalNumberOfDays(year, month);

	return (totalNumberOfDays + startDay1800) % 7;
}

//����-6������
int getTotalNumberOfDays(int year, int month)
{
	int total = 0;

	for (int i = 1800; i < year; i++)
		if (isLeapYear(i))
			total = total + 366;
		else
			total = total + 365;

	for (int i = 1; i < month; i++)
		total = total + getNumberOfDaysInMonth(year, i);

	return total;
}

//����-7������
int getNumberOfDaysInMonth(int year, int month)
{
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		return 31;

	if (month == 4 || month == 6 || month == 9 || month == 11)
		return 30;

	if (month == 2) return isLeapYear(year) ? 29 : 28;

	return 0;
}

//����-8������
bool isLeapYear(int year)
{
	return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}