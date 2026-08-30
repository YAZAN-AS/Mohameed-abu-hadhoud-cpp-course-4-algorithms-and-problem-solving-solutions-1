#include<iostream>
using namespace std;

int ReadNumber()
{
	int N;
	cout << "Please enter a number: " << endl;
	cin >> N;
	cout << endl;
	return N;
}

int Sum(int N)
{
	int sum = 0;
	for (int i = 1; i <= N; i++)
	{
		if (i % 2 == 1)
		{
			sum += i;
		}
	}
	return sum;
}

void Print(int N)
{
	cout << "The sum is: " << Sum(N);
}

int main()
{
	Print(ReadNumber());


	system("pause>0");
	return 0;
}