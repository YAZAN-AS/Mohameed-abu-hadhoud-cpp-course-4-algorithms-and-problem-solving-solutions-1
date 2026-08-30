#include<iostream>
using namespace std;

int ReadNum(string Message)
{
	int num;
	cout << Message << endl;
	cin >> num;
	return num;
}

int CalculateTotalSeconds(int Days, int Hours, int Minutes, int Seconds)
{
	return (Seconds + (Minutes * 60) + (Hours * 60 * 60) + (Days * 24 * 60 * 60));
}

int main()
{
	int Days = ReadNum("Enter the number of Days:");
	int Hours = ReadNum("Enter the number of Hours:");
	int Minutes = ReadNum("Enter the number of Minutes:");
	int Seconds = ReadNum("Enter the number of Seconds:");
	int TotalSeconds = CalculateTotalSeconds(Days, Hours, Minutes, Seconds);

	cout << "\nTotal Seconds: " << TotalSeconds << endl;

	system("pause>0");
	return 0;
}