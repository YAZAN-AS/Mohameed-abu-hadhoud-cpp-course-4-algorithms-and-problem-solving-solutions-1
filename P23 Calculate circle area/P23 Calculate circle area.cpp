#include<iostream>
#include<cmath>
using namespace std;

void ReadNumbers(int& a, int& b, int& c)
{
	cout << "Please enter a: ";
	cin >> a;
	cout << "Please enter b: ";
	cin >> b;
	cout << "Please enter c: ";
	cin >> c;
}

float CalculateCircleArea(int a, int b, int c)
{
	const double PI = 3.141592653589793;
	float p = (a + b + c) / 2;
	return (float)(PI * (pow((a * b * c) / (4.0 * sqrt(p * (p - a) * (p - b) * (p - c))), 2)));
}

void PrintResult(float CircleArea)
{
	cout << "The Area of the Circle is: " << CircleArea << endl;
}

int main()
{
	int a, b, c;
	ReadNumbers(a, b, c);
	cout << endl;
	PrintResult(CalculateCircleArea(a, b, c));


	system("pause>0");
	return 0;
}