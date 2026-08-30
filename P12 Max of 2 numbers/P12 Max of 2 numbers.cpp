#include<iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{
	cin >> Num1;
	cin >> Num2;
}

int MaxOf2Numbers(int Num1, int Num2)
{
	int Max;
	if (Num1 > Num2) { Max = Num1; }
	else { Max = Num2; }
	return Max;
}

void PrintResult(int Max)
{
	cout << "\nThe Max Number is: " << Max << endl;
}

int main()
{
	int Num1, Num2;
	ReadNumbers(Num1, Num2);
	PrintResult(MaxOf2Numbers(Num1, Num2));


	system("pause>0");
	return 0;
}