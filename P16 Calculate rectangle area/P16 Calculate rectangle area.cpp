#include<iostream>
#include<cmath>
using namespace std;

void ReadNumbers(int& A, int& D)
{
	cout << "Please enter rectangle width: ";
	cin >> A;
	cout << "Please enter rectangle lenght: ";
	cin >> D;
}

float CalculateRetangleArea(int A, int D)
{
	return (float)(A * (sqrt(pow(D, 2) - pow(A, 2))));
}

void PrintResult(float RectangleArea)
{
	cout << "The Area of the Rectangle is: " << RectangleArea << endl;
}

int main()
{
	int A, D;
	ReadNumbers(A, D);
	cout << endl;
	PrintResult(CalculateRetangleArea(A, D));


	system("pause>0");
	return 0;
}