#include<iostream>
using namespace std;

int ReadNum(string Message)
{
	int num;
	cout << Message << endl;
	cin >> num;
	return num;
}

float NumOfDays(int NumOfHours)
{
	return (float)NumOfHours / 24;
}

float NumOfWeeks(int NumOfHours)
{
	return (float)(NumOfHours / 24) / 7;
}

void Print(int NumOfHours)
{
	cout << endl;
	cout << "Num Of Days: " << NumOfDays(NumOfHours) << " Weeks" << endl;
	cout << "Num Of Weeks: " << NumOfWeeks(NumOfHours) << " Days" << endl;
}

int main()
{
	int NumOfHours = ReadNum("Enter the number of hours:");
	Print(NumOfHours);

	system("pause>0");
	return 0;
}