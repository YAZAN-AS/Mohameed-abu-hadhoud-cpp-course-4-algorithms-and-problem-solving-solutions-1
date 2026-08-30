#include<iostream>
#include<cmath>
using namespace std;

void ReadNumbers(int& A, int& H)
{
	cout << "Please enter rectangle base A: ";
	cin >> A;
	cout << "Please enter rectangle height: ";
	cin >> H;
}

float CalculateTreangleArea(int A, int H)
{
	return (float)((A * H) / 2.0);
}

void PrintResult(float TreangleArea)
{
	cout << "The Area of the Rectangle is: " << TreangleArea << endl;
}

int main()
{
	int A, H;
	ReadNumbers(A, H);
	cout << endl;
	PrintResult(CalculateTreangleArea(A, H));


	system("pause>0");
	return 0;
}