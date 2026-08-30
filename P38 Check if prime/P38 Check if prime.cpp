#include<iostream>
using namespace std;

int ReadPositiveNumber()
{
	int Num;
	do {
		cout << "Enter a number:" << endl;
		cin >> Num;
	} while (Num <= 0);
	return Num;
}

bool CheckIfPrime(int Num)
{
	if (Num == 1) { return 0; }
	for (int i = 2; i < Num; i++)
	{
		if (Num % i == 0) { return 0; }
	}
	return 1;
}

void Print(int Num)
{
	if (CheckIfPrime(Num))
	{
		cout << "The Number is Prime" << endl;
	}
	else
	{
		cout << "The Number isn't Prime" << endl;
	}
}

int main()
{
	Print(ReadPositiveNumber());

	system("pause>0");
	return 0;
}