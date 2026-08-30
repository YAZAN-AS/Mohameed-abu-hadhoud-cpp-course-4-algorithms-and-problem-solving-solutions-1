#include<iostream>
using namespace std;

int ReadPositiveNumber()
{
	int N;
	do
	{
		cout << "Enter a number: " << endl;
		cin >> N;
	} while (N <= 0);
	return N;
}

int Factorial(int N)
{
	int F = 1;
	for (int i = 1; i <= N; i++)
	{
		F *= i;
	}
	return F;
}

void Print(int N)
{
	cout << "\n\nThe factorial of " << N << " is:" << Factorial(N) << endl;
}

int main()
{
	Print(ReadPositiveNumber());

	system("pause>0");
	return 0;
}