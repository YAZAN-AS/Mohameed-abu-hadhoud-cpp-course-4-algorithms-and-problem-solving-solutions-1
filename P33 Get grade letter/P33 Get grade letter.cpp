#include<iostream>
using namespace std;

int ReadNumberInRange(int From, int To)
{
	int N;
	do
	{
		cout << "Please enter a number between 0 and 100:" << endl;
		cin >> N;
	} while (N > To || N < From);
	return N;
}

char GetGradeLetter(int Grade)
{
	if (Grade >= 90) { return 'A'; }
	else if (Grade >= 80) { return 'B'; }
	else if (Grade >= 70) { return 'C'; }
	else if (Grade >= 60) { return 'D'; }
	else if (Grade >= 50) { return 'E'; }
	else { return 'F'; }
}

void PrintGradeLetter(int Grade)
{
	cout << "\nResult = " << GetGradeLetter(Grade) << endl;
}

int main()
{
	PrintGradeLetter(ReadNumberInRange(0, 100));

	system("pause>0");
	return 0;
}