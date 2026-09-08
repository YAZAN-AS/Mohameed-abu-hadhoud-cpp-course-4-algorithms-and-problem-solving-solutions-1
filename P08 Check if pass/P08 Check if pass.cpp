#include<iostream>
using namespace std;

enum enResult { Pass = 1, Fail = 2 };

int ReadMark()
{
	int Mark;
	cout << "Enter your mark: " << endl;
	cin >> Mark;
	return Mark;
}

enResult CheckIfPass(int Mark)
{
	if (Mark >= 50) { return Pass; }
	else { return Fail; }
}

void PrintResult(int Mark)
{
	if (CheckIfPass(Mark) == 1) { cout << "\nPass" << endl; }
	else { cout << "\nFail" << endl; }
}

int main()
{
	PrintResult(ReadMark());


	system("pause>0");
	return 0;
}