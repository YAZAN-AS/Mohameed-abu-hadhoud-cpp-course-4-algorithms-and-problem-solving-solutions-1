#include<iostream>
using namespace std;

void ReadNumbers(int& N, int& M)
{
	cout << "Enter a number: " << endl;
	cin >> N;
	cout << "Enter M:" << endl;
	cin >> M;
	cout << endl;
}

int Power(int N, int M)
{
	int a = 1;
	if (M == 0) { return 1; }
	for (int i = 1; i <= M; i++)
	{
		a *= N;
	}
	return a;
}

void Print(int N, int M)
{
	cout << Power(N, M);
}

int main()
{
	int N, M;
	ReadNumbers(N, M);
	Print(N, M);

	system("pause>0");
	return 0;
}