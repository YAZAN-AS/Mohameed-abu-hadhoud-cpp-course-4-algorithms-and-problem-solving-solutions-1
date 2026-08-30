#include<iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
	cin >> Num1;
	cin >> Num2;
	cin >> Num3;
}

int MaxOf3Numbers(int Num1, int Num2, int Num3)
{
	int Max;
	if (Num1 > Num2)
	{
		if (Num1 > Num3) { Max = Num1; }
		else { Max = Num3; }
	}
	else
	{
		if (Num2 > Num3) { Max = Num2; }
		else { Max = Num3; }
	}
	return Max;
}

void PrintResult(int Max)
{
	cout << "\nThe Max Number is: " << Max << endl;
}

int main()
{
	int Num1, Num2, Num3;
	ReadNumbers(Num1, Num2, Num3);
	PrintResult(MaxOf2Numbers(Num1, Num2, Num3));


	system("pause>0");
	return 0;
}