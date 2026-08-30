#include<iostream>
using namespace std;

int ReadN()
{
	int N;
	cout << "Please enter a number: " << endl;
	cin >> N;
	cout << endl;
	return N;
}

void Print(int N)
{
	for (int i = N; i >= 1; i--)
	{
		cout << i << endl;
	}
}

int main()
{
	Print(ReadN());


	system("pause>0");
	return 0;
}
