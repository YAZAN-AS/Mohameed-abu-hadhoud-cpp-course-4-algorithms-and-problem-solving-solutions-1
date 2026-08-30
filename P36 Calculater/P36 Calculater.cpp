#include<iostream>
using namespace std;

int ReadNumber(string Message)
{
	int Num;
	cout << Message << endl;
	cin >> Num;
	return Num;
}

char ReadOperationType()
{
	char OpType;
	cout << "Enter operation type:" << endl;
	cin >> OpType;
	return OpType;
}

float Calculate(char OpType, int Num1, int Num2)
{
	if (OpType == '+') { return Num1 + Num2; }
	if (OpType == '-') { return Num1 - Num2; }
	if (OpType == '*') { return Num1 * Num2; }
	if (OpType == '/') { return (float)Num1 / Num2; }
	if (OpType == '%') { return Num1 % Num2; }
}

void PrintResult(char OpType, int Num2, int Num1)
{
	cout << endl;
	cout << "Result is: " << Calculate(OpType, Num2, Num1) << endl;
}

int main()
{
	PrintResult(ReadOperationType(), ReadNumber("Number 2:"), ReadNumber("Number 1:"));

	system("pause>0");
	return 0;
}