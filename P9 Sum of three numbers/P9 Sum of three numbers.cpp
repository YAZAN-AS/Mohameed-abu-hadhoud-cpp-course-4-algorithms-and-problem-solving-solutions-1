#include <iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
	cin >> Num1;
	cin >> Num2;
	cin >> Num3;
}

int SumOfThreeNumbers(int Num1, int Num2, int Num3)
{
	return Num1 + Num2 + Num3;
}

void Print(int sum)
{
	cout << "The Sum is: " << sum << endl;
}

int main()
{
	int Num1, Num2, Num3;
	ReadNumbers(Num1, Num2, Num3);
	Print(SumOfThreeNumbers(Num1, Num2, Num3));


	system("pause>0");
	return 0;
}
