#include<iostream>
using namespace std;

int ReadNumber()
{
	int Num;
	cout << "Enter a number:" << endl;
	cin >> Num;
	return Num;
}

int Calculate()
{
	int num = 0;
	int Sum = 0;
	while (num != -99)
	{
		num = ReadNumber();
		if (num != -99)
		{
			Sum += num;
		}
	}
	cout << endl;
	return Sum;
}

void Print()
{
	cout << Calculate();
}

int main()
{
	Print();

	system("pause>0");
	return 0;
}