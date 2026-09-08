#include<iostream>
#include<string>
using namespace std;

int ReadNumber()
{
	int num;
	cout << "Enter a Number: " << endl;
	cin >> num;
	return num;
}

float GetTheHalf(int num)
{
	return (float)num / 2;
}

void Print(int num)
{
	cout << "The half of " << to_string(num) << " is: " << to_string(GetTheHalf(num)) << endl;
}

int main()
{
	Print(ReadNumber());


	system("pause>0");
	return 0;
}