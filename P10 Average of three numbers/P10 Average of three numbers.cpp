#include <iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
	cin >> Num1;
	cin >> Num2;
	cin >> Num3;
}

float averageOfThreeNumbers(int Num1, int Num2, int Num3)
{
	return (float)(Num1 + Num2 + Num3) / 3;
}

void Print(float ave)
{
	cout << "The Average is: " << ave << endl;
}

int main()
{
	int Num1, Num2, Num3;
	ReadNumbers(Num1, Num2, Num3);
	Print(averageOfThreeNumbers(Num1, Num2, Num3));


	system("pause>0");
	return 0;
}
