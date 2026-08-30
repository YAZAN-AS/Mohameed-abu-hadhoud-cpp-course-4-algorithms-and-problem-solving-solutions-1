#include <iostream>
using namespace std;

enum enResult { Pass = 1, Fail = 2 };

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

enResult CheckAverage(float ave)
{
	if (ave >= 50) { return Pass; }
	else { return Fail; }
}

void PrintAverage(float ave)
{
	cout << "The average is: " << ave << endl << endl;
}

void PrintResult(enResult Result)
{
	if (Result == 1) { cout << "Your Result is Pass" << endl; }
	else { cout << "Your Result is Fail" << endl; }
}

int main()
{
	int Num1, Num2, Num3;
	ReadNumbers(Num1, Num2, Num3);
	PrintAverage(averageOfThreeNumbers(Num1, Num2, Num3));
	PrintResult(CheckAverage(averageOfThreeNumbers(Num1, Num2, Num3)));


	system("pause>0");
	return 0;
}
