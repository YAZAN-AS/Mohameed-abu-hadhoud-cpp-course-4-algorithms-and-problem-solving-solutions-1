#include<iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{
	cout << "Num1=";
	cin >> Num1;
	cout << "Num2:";
	cin >> Num2;
}

void SwapNumbers(int& Num1, int& Num2)
{
	int temp = Num1;
	Num1 = Num2;
	Num2 = temp;
}

void PrintResult(int Num1, int Num2)
{
	cout << "Num1=" << Num1 << endl;
	cout << "Num2=" << Num2 << endl;
}

int main()
{
	int Num1, Num2;
	ReadNumbers(Num1, Num2);
	cout << endl;
	SwapNumbers(Num1, Num2);
	PrintResult(Num1, Num2);


	system("pause>0");
	return 0;
}