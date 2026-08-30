#include<iostream>
#include<cmath>
using namespace std;

void ReadNumbers(int& a, int& b)
{
	cout << "Please enter a: ";
	cin >> a;
	cout << "Please enter b: ";
	cin >> b;
}

float CalculateCircleArea(int a, int b)
{
	const double PI = 3.141592653589793;
	return (float)((PI) * (pow(b, 2) / 4.0) * ((2.0 * a - b) / (2.0 * a + b)));
}

void PrintResult(float CircleArea)
{
	cout << "The Area of the Circle is: " << CircleArea << endl;
}

int main()
{
	int a, b;
	ReadNumbers(a, b);
	cout << endl;
	PrintResult(CalculateCircleArea(a, b));


	system("pause>0");
	return 0;
}